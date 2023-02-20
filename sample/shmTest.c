// gcc shmTest.c -o shmTest -lrt
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// fork and wait
#include <sys/wait.h>
#include <unistd.h>

// syscall
#include <fcntl.h>
#include <sys/mman.h>

// optional
// #include <signal.h>
// #include <unistd.h>

#define SHM_NAME "test-shm"
#define NB 8
#define SIZE (NB * sizeof(int))

bool writeDataInShm() {
  // Open / create shared memory space
  int fd = shm_open(SHM_NAME, O_CREAT | O_EXCL | O_RDWR, 0604);
  if (fd < 0) return false;

  // define the size of the shared memory section
  ftruncate(fd, SIZE);

  // Map shared memory in address space. mmap map shmFd from 0 to SIZE and
  // return the corresponding address in data. (mmap addr==0 indicate to mmap
  // to choose the address)
  int* data = mmap(0, SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
  printf("sender mapped address: %p\n", data);

  // Write data in shared memory
  for (size_t i = 0; i < NB; i++) data[i] = i;

  // unmap shm and address space.
  munmap(data, SIZE);
  close(fd);

  return true;
}

bool readDataInShm() {
  int fd = shm_open(SHM_NAME, O_RDONLY, 0666);
  if (fd < 0) return false;

  // Map shared memory in address space.
  int* data = mmap(0, SIZE, PROT_READ, MAP_SHARED, fd, 0);
  printf("receiver mapped address: %p\n", data);

  // Read data in shared memory
  for (size_t i = 0; i < NB; i++) printf("%d ", data[i]);
  printf("\n");

  // unmap shm and address space.
  munmap(data, SIZE);
  close(fd);

  return true;
}

void sigHandler(int sig) {
  if (sig == SIGUSR1) {
    bool status = readDataInShm();

    // remove the shm section
    shm_unlink(SHM_NAME);
    exit(EXIT_SUCCESS);
  }

  if (sig == SIGABRT) {
    printf("fail\n");
    exit(EXIT_FAILURE);
  }
}

int main(int argc, char const* argv[]) {
  pid_t childPid = fork();

  if (childPid) {  // father process
    sleep(2);      // wait for receiver init sigaction

    bool status = writeDataInShm();
    if (status)
      kill(childPid, SIGUSR1);
    else {
      kill(childPid, SIGABRT);
      exit(EXIT_FAILURE);
    }

  } else {  // child process

    struct sigaction customSa, saveOldSa;
    customSa.sa_flags = 0;
    sigemptyset(&customSa.sa_mask);
    customSa.sa_handler = sigHandler;

    sigaction(SIGUSR1, &customSa, &saveOldSa);
    sigaction(SIGABRT, &customSa, NULL);

    wait(NULL);

    while (true)
      ;  // replace by computation
  }

  return EXIT_SUCCESS;
}

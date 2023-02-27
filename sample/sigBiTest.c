// gcc sigBiTest.c -o sigBiTest
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// fork and wait
#include <sys/wait.h>
#include <unistd.h>

void sigHandler(int sig) {
  printf("Receive\n");

  exit(EXIT_SUCCESS);
}

int main(int argc, char const* argv[]) {
  pid_t childPid = fork();

  if (childPid) {  // father process
    sleep(2);

    kill(childPid, SIGUSR1);
    printf("Kill send\n");
  } else {  // child process

    struct sigaction customSa, saveOldSa;
    customSa.sa_flags = 0;
    sigemptyset(&customSa.sa_mask);
//     customSa.sa_handler = sigHandler;
//     customSa.sa_handler = SIG_DFL;
    customSa.sa_handler = SIG_IGN;
//     customSa.sa_handler = NULL;

    sigaction(SIGUSR1, &customSa, &saveOldSa);

    while (true) {
      sleep(1);
      printf("Oui\n");
    }
  }

  return EXIT_SUCCESS;
}

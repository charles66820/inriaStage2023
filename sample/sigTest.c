#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

// optional
#include <string.h>
#include <unistd.h>

struct sigaction customSa, saveOldSa;

void sigIntHandler(int sig) {
  printf("\nsig code: %d, sig name %s\n", sig, strsignal(sig));

  if (sig == SIGINT) {
    // restore the default SIGINT handler
    sigaction(SIGINT, &saveOldSa, NULL);
  }

  if (sig == SIGQUIT) {
    size_t i = 0;
    while (i < 1E12) {
      printf("long loop 1: %d\n", i);
      i++;
    }
  }
  if (sig == SIGTSTP) {
    size_t i = 0;
    while (i < 1E12) {
      printf("long loop 2: %d\n", i);
      sleep(1);
      i++;
    }
  }
}

int main(int argc, char const *argv[]) {
  customSa.sa_flags = 0;  // SA_NOCLDSTOP | SA_NOCLDWAIT;

  // empty the mask (all bits set to 0)
  sigemptyset(&customSa.sa_mask);
  // fill the mask (all bits set to )
  // sigfillset(&sa.sa_mask);

  customSa.sa_handler = sigIntHandler;

  // add customSa and save old one
  sigaction(SIGINT, &customSa, &saveOldSa); // `Ctrl-C`
  sigaction(SIGQUIT, &customSa, NULL); // `Ctrl-\`
  sigaction(SIGTSTP, &customSa, NULL); // `Crl-Z`
  // sigaction(SIGINFO, &customSa, NULL); // `Ctrl-T`
  // sigaction(SIGPWR, &customSa, NULL);
  sigaction(SIGUSR1, &customSa, NULL);

  sigaddset(&customSa.sa_mask, SIGINT);   // add interrupt signal to mask
  sigaddset(&customSa.sa_mask, SIGQUIT);  // add quit signal to mask

  // apply block for signals in the mask
  sigprocmask(SIG_BLOCK, &customSa.sa_mask, &saveOldSa.sa_mask);

  sleep(8);

  // apply unblock for signals in the mask
  sigprocmask(SIG_UNBLOCK, &customSa.sa_mask, NULL);

  for (;;)
    ;

  return EXIT_SUCCESS;
}

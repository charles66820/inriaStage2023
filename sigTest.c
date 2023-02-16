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
}

int main(int argc, char const *argv[]) {
  customSa.sa_flags = 0;  // SA_NOCLDSTOP | SA_NOCLDWAIT;

  // empty the mask (all bits set to 0)
  sigemptyset(&customSa.sa_mask);
  // fill the mask (all bits set to )
  // sigfillset(&sa.sa_mask);

  customSa.sa_handler = sigIntHandler;

  // add customSa and save old one
  sigaction(SIGINT, &customSa, &saveOldSa);
  sigaction(SIGQUIT, &customSa, NULL);
  sigaction(SIGTSTP, &customSa, NULL);
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

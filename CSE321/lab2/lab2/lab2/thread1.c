#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *f1(void *message) {
  printf("%s running\n", (char *)message);

  return NULL;
}

int main(int argc, char *argv[]) {
  int i;
  pthread_t t;
  char *messages[] = {"thread-1", "thread-2", "thread-3", "thread-4", "thread-5"};

  
  for (i = 0; i < 5; i++) {
    pthread_create(&t, NULL, f1, messages[i]);
  }

  
  for (i = 0; i < 5; i++) {
    pthread_join(t, NULL);
    printf("%s closed\n", messages[i]);
  }

  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int counter = 1;

void *thread_function(void *arg) {
  char *message = (char *)arg;

  for (int i = 0; i < 5; i++) {
    printf("%s prints %d\n", message, counter++);
  }

  return NULL;
}

int main(int argc, char *argv[]) {
  pthread_t threads[5];
  char *messages[] = {"Thread 0", "Thread 1", "Thread 2", "Thread 3", "Thread 4"};

  
  for (int i = 0; i < 5; i++) {
    pthread_create(&threads[i], NULL, thread_function, messages[i]);
  }

  
  for (int i = 0; i < 5; i++) {
    pthread_join(threads[i], NULL);
  }

  return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

pthread_mutex_t sum_mutex;

int get_ascii_sum(char *name) {
  int sum = 0;
  pthread_mutex_lock(&sum_mutex);
  for (int i = 0; i < strlen(name); i++) {
    sum += name[i];
  }
  pthread_mutex_unlock(&sum_mutex);
  return sum;
}

void *thread_function(void *arg) {
  char *name = (char *)arg;
  int sum = get_ascii_sum(name);
  printf("Thread %s returned %d\n", name, sum);
  return NULL;
}

int main(int argc, char *argv[]) {
  pthread_t threads[3];
  char *names[] = {"John", "Doe", "Jane"};


  pthread_mutex_init(&sum_mutex, NULL);

  
  for (int i = 0; i < 3; i++) {
    pthread_create(&threads[i], NULL, thread_function, names[i]);
  }

  
  for (int i = 0; i < 3; i++) {
    pthread_join(threads[i], NULL);
  }

  
  pthread_mutex_destroy(&sum_mutex);

  int values[3];
  for (int i = 0; i < 3; i++) {
    values[i] = get_ascii_sum(names[i]);
  }

  
  int is_equal = 1;
  for (int i = 0; i < 2; i++) {
    if (values[i] != values[i + 1]) {
      is_equal = 0;
      break;
    }
  }

  
  if (is_equal) {
    printf("Youreka\n");
  } else if (values[0] == values[1]) {
    printf("Miracle\n");
  } else {
    printf("Hasta la vista\n");
  }

  return 0;
}


#include <pthread.h>
#include <stdio.h>
#include <string.h>
#define MAX 10 //producers and consumers can produce and consume upto MAX
#define BUFLEN 6
#define NUMTHREAD 2 /* number of threads */
void * consumer(int *id);
void * producer(int *id);
char buffer[BUFLEN];
char source[BUFLEN]; //from this array producer will store it's production into
buffer
int pCount = 0;
int cCount = 0;
int buflen;

//initializing pthread mutex and condition variables
pthread_mutex_t count_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t nonEmpty = PTHREAD_COND_INITIALIZER;
pthread_cond_t full = PTHREAD_COND_INITIALIZER;
int thread_id[NUMTHREAD] = {0,1};
int i = 0;
int j = 0;
main()
{
int i;
/* define the type to be pthread */
pthread_t thread[NUMTHREAD];
strcpy(source,"abcdef");
buflen = strlen(source);
/* create 2 threads*/
/* create one consumer and one producer */
/* define the properties of multi threads for both threads */
//Write Code Here
 pthread_create(&thread[0], NULL, (void *)producer, thread_id[i] );
pthread_create(&thread[1], NULL, (void *)consumer, thread_id[i] );

for (int i = 0; i < NUMTHREAD; i++)
{
    pthread_join(thread[i], NULL);
    
}

return 0;
}

void * producer(int *id)
{

//Write code here
for (int i = 0; i < MAX; i++)
{
    pthread_mutex_lock(&count_mutex);
    while ((pCount - cCount)>= BUFLEN)
    {
        pthread_cond_wait(&full, &count_mutex);
    }
    buffer[pCount % BUFLEN] = source[pCount ];
    printf("%d produced %c by Thread %d\n", i,  buffer[pCount % BUFLEN], *(int *)id);
    pCount++;

    pthread_cond_signal(&nonEmpty);
    pthread_mutex_unlock(&count_mutex);
    
}

}
void * consumer(int *id)
{

//Write code here
for (int i = 0; i < MAX; i++)
{
    pthread_mutex_lock(&count_mutex);
    while (pCount <= cCount)
    {
        pthread_cond_wait(&nonEmpty, &count_mutex);
    }
    
    printf("%d consumed %c by Thread %d\n", i,  buffer[cCount % BUFLEN], *(int *)id);
    cCount++;

    pthread_cond_signal(&full);
    pthread_mutex_unlock(&count_mutex);
    
}
}
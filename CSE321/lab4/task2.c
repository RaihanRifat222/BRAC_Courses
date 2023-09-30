#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>

#define MaxCrops 5
#define warehouseSize 5

sem_t empty;
sem_t full;
int in = 0;
int out = 0;
char crops[MaxCrops] = {'R', 'W', 'P', 'S', 'M'};
char warehouse[warehouseSize] = {'N', 'N', 'N', 'N', 'N'};
pthread_mutex_t mutex;

void *Farmer(void *farmerNumber) {
    int farmerID = *(int *)farmerNumber;

    for(int i=0; i< MaxCrops; i++) {
        
        char crop = crops[farmerID - 1];

        
        sem_wait(&empty);
        
        
        pthread_mutex_lock(&mutex);

        
        warehouse[in] = crop;
        printf("Farmer %d: Insert crop %c at %d\n", farmerID, crop, in);

        
        in = (in + 1) % warehouseSize;

        
        pthread_mutex_unlock(&mutex);

        
        sem_post(&full);
    }
}

void *ShopOwner(void *shopOwnerNumber) {
    int shopOwnerID = *(int *)shopOwnerNumber;

    for(int i=0; i< MaxCrops; i++) {
        
        sem_wait(&full);
       
        pthread_mutex_lock(&mutex);
       
        char crop = warehouse[out];
        warehouse[out] = 'N';
        printf("Shop owner %d: Remove crop %c from %d\n", shopOwnerID, crop, out);

        
        out = (out + 1) % warehouseSize;

        
        pthread_mutex_unlock(&mutex);

        
        sem_post(&empty);
    }
}

int main() {
    pthread_t Far[5], Sho[5];
    pthread_mutex_init(&mutex, NULL);
    sem_init(&empty, 0, warehouseSize);
    sem_init(&full, 0, 0);
    int farmerIDs[5] = {1, 2, 3, 4, 5};
    int shopOwnerIDs[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        pthread_create(&Far[i], NULL, Farmer, &farmerIDs[i]);
        pthread_create(&Sho[i], NULL, ShopOwner, &shopOwnerIDs[i]);
    }

    
    sleep(10);

    
    pthread_mutex_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>



int main() {
    int a, b, c;
    int shmid, *process_count;

    int SHM_SIZE = 4;
    shmid = shmget(IPC_PRIVATE, SHM_SIZE, IPC_CREAT | 0666);
    process_count = (int *)shmat(shmid, NULL, 0);

    *process_count = 0;  

    a = fork();
    b = fork();
    c = fork();

    (*process_count)++;  

    if (a == 0 || b == 0 || c == 0) {
        
        if (getpid() % 2 != 0) {
            fork();  
            (*process_count)++;  
        }

    }

    
    if (a != 0 && b != 0 && c != 0) {
        wait(NULL);
        printf("Total process count %d\n", *process_count);
    }

    
    shmdt(process_count);
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}


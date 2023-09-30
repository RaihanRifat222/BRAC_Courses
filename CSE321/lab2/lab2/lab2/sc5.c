#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/wait.h>

int main() {
    printf("1. Parent process ID: %d\n", getpid());

    pid_t child_pid = fork();

   
    if (child_pid == 0) {
        printf("2. Child process ID: %d\n", getpid());

        for (int i = 0; i < 3; i++) {
            pid_t grandchild_pid = fork();

            if (grandchild_pid == 0) {
                printf("3. Grand Child process ID: %d\n", getpid());
                exit(0);
            }
            
            
        }

        exit(0);
    } else {
        wait(NULL);
    }

    return 0;
}


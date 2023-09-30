#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int numbers[] = {1, 4, 6, 3, 56, 7, 8};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    pid_t pid = fork();

    if (pid == 0) {
        
        execv("./sort", NULL);
    } else if (pid > 0) {
        
        wait(NULL);
        execv("./oddeven", NULL);
    } else {
        printf("Fork failed\n");
        return 1;
    }

    return 0;
}


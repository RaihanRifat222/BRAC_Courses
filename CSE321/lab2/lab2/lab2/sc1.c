#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main() {
    int fd;
    char buff[100];

    fd = open("task1.txt", O_WRONLY | O_CREAT, 0666);  
    if (fd == -1) {
        printf("Error.\n");
        return 1;
    }

    while (1) {
        scanf("%s", buff);
        if (strcmp(buff, "-1") == 0) {
            break;
        }
        write(fd, buff, strlen(buff));
    }

    close(fd);
    return 0;
}


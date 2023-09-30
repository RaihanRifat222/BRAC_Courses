#include <stdio.h>
#include <string.h>

int main() {
    char target[] = "@sheba.xyz";
    char email[100];

    printf("Enter the email address: ");
    scanf("%s", email);

    char *ptr = strstr(email, target);

    if (ptr != NULL) {
        printf("Email address is up to date.\n");
    } else {
        printf("Email address is outdated.\n");
    }

    return 0;
}

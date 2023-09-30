#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[100];
    int lowercase = 0, uppercase = 0, digit = 0, special = 0;

    printf("Enter the password: ");
    scanf("%s", password);

    int i = 0;
    int length = strlen(password);

    while (i < length) {
        if (islower(password[i])) {
            lowercase += 1;
        } else if (isupper(password[i])) {
            uppercase += 1;
        } else if (isdigit(password[i])) {
            digit += 1;
        } else {
            special += 1;
        }
        i++;
    }

    if (lowercase != 0 && uppercase != 0 && digit != 0 && special != 0) {
        printf("Ok\n");
        return 0;
    }

    if (uppercase == 0) {
        printf("Uppercase characters are missing");
        if (lowercase == 0 || digit == 0 || special == 0) {
            printf(", ");
        }
    }

    if (lowercase == 0) {
        printf("Lowercase characters are missing");
        if (digit == 0 || special == 0) {
            printf(", ");
        }
    }

    if (digit == 0) {
        printf("Digits are missing");
        if (special == 0) {
            printf(", ");
        }
    }

    if (special == 0) {
        printf("Special characters are missing");
    }

    printf("\n");

    return 0;
}

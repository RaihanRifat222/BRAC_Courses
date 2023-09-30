#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input[100];
    scanf("%s", input);

    char *start = &input[0];
    char *end = &input[strlen(input) - 1];
    bool isPalindrome = true;

    while (start < end) {
        if (*start != *end) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}

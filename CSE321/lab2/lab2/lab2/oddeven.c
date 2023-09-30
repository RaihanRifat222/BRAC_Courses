#include <stdio.h>

void checkOddEven(int arr[], int n) {
    printf("Odd/Even Status:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d: Even\n", arr[i]);
        } else {
            printf("%d: Odd\n", arr[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    int numbers[] = {1, 4, 6, 3, 56, 7, 8};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    checkOddEven(numbers, n);

    return 0;
}


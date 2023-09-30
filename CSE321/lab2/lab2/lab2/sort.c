#include <stdio.h>

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int numbers[] = {1, 4, 6, 3, 56, 7, 8};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    bubbleSortDescending(numbers, n);

    printf("Sorted Array (Descending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}


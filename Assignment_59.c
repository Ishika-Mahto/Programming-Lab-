#include <stdio.h>

void countOddEven(int arr[], int size) {
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Total even numbers: %d\n", even_count);
    printf("Total odd numbers: %d\n", odd_count);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    countOddEven(arr, size);

    return 0;
}
#include <stdio.h>

int main() {
    int N_MAX = 100;
    int n;
    int i;
    
    printf("Enter the number of elements (up to 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > N_MAX) {
        printf("Invalid number of elements.\n");
        return 1;
    }
    
    int arr[N_MAX];
    int max_val, min_val;

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    max_val = arr[0];
    min_val = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }

        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    printf("\nArray elements entered: ");
    for (i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
    }
    printf("\n");

    printf("Maximum element: %d\n", max_val);
    printf("Minimum element: %d\n", min_val);

    return 0;
}
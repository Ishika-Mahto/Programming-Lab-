#include <stdio.h>

int main() {
    const int N = 4;
    int i, j, k, num_spaces;

    printf("Generated Pattern:\n");

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        num_spaces = 10 - 4 * (i - 1);
        if (num_spaces > 0) {
            for (k = 0; k < num_spaces; k++) {
                printf(" ");
            }
        }
        
        int right_start = i;
        if (i == N) {
            right_start = N - 1; 
        }

        for (j = right_start; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
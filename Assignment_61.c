#include <stdio.h>

#define ROWS 3
#define COLS 2

int main() {
    int matrix[ROWS][COLS] = {
        {10, 20},
        {30, 40},
        {50, 60}
    };
    // Transpose matrix will be COLS x ROWS (2x3)
    int transpose[COLS][ROWS];

    // Calculate transpose
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print original matrix
    printf("Original Matrix (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transposed matrix
    printf("\nTransposed Matrix (%dx%d):\n", COLS, ROWS);
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
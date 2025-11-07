#include <stdio.h>
int main() 
{
    int N = 3;
    int matrix[3][3];
    int current_num = 1; 
    int top = 0;
    int bottom = N - 1;
    int left = 0;
    int right = N - 1; 
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) {
            matrix[top][j] = current_num++;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = current_num++;
        }
        right--; 
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                matrix[bottom][j] = current_num++;
            }
            bottom--; 
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = current_num++;
            }
            left++;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    printf("Enter the number of terms for Fibonacci series: ");
    
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci Series (first %d terms): ", n);
    for (i = 0; i < n; i++) {
        printf("%d", fibonacci(i));
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
#include <stdio.h>
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    
    if (scanf("%d %d", &num1, &num2) != 2 || num1 < 0 || num2 < 0) {
        printf("Invalid input. Please enter two positive integers.\n");
        return 1;
    }

    int result = findGCD(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
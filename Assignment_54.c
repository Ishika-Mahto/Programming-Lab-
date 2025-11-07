#include <stdio.h>
int sumOfFirstTenEven() {
    int sum = 0;
    for (int i = 1; i <= 10; i++)
        sum += (2 * i);
    return sum;
}

int main() {
    int sum = sumOfFirstTenEven();
    printf("The sum of the first ten even natural numbers is: %d\n", sum);
    return 0;
}   
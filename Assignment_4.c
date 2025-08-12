#include <stdio.h>
int main()
{
    int num;;
    printf("Enter a number whose multiplication table is needed\n ");
    scanf("%d", &num);
    printf("Multiplication table is: \n");
    printf("1 x %d = %d\n", num, 1 * num);
    printf("2 x %d = %d\n", num, 2 * num);
    printf("3 x %d = %d\n", num, 3 * num);
    printf("4 x %d = %d\n", num, 4 * num);
    printf("5 x %d = %d\n", num, 5 * num);
    printf("6 x %d = %d\n", num, 6 * num);
    printf("7 x %d = %d\n", num, 7 * num);
    printf("8 x %d = %d\n", num, 8 * num);
    printf("9 x %d = %d\n", num, 9 * num);
    printf("10 x %d = %d\n", num, 10 * num);
    return 0;
}
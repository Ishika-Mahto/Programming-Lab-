#include <stdio.h>
int main() 
{
    int n, rem, rev = 0, num, temp;
    printf("Enter an integer: ");
    scanf("%d",&n);
    num = n; 
    temp = (n < 0) ? -n : n;
    while (temp != 0) 
    {
        rem = temp % 10;
        rev = rev * 10 + rem; 
        temp /= 10;
    }
    if (num < 0) 
        rev = -rev;
    printf("\nOriginal number: %d\n", num);
    printf("Reversed number: %ld\n", rev);
    return 0;
}
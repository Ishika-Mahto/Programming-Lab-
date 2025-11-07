#include <stdio.h>
int main() 
{
    int n, num, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d",&n);
    num = n;
    while (n != 0) 
    {
        rem = n % 10; 
        rev = rev * 10 + rem; 
        n /= 10;
    }
    if (num == rev) 
        printf("The number is a Palindrome Number.\n");
    else
        printf("The number is not a Palindrome Number.\n");
    return 0;
}
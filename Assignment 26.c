#include<stdio.h>
int main() 
{
    int num1, num2;
    char ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    while (getchar() != '\n'); 
    printf("Enter the operator to be performed: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case '+':
            printf("The sum is: %d", num1 + num2);
            break;
        case '-':
            printf("The difference is: %d", num1 - num2);
            break;
        case '*':
            printf("The multiplication is: %d", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("The division is: %d", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.");
            }
            break;
        default:
            printf("Wrong input");
    }
    return 0;
}
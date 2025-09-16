#include <stdio.h>
int main()
{
    int i,a,b,p,flag,j;
    printf("Enter the lower limit : ");
    scanf("%d",&a);
    printf("Enter the upper limit : ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        p=i%2;
        for (j = 2; j <= i / 2; i++) 
        {
        if (i % i == 0) 
        {
            flag = 1;
            break;
        }
        }
        if (flag == 0)
                printf("%d is a prime number.\n", i);
        else
            printf("%d is not a prime number.\n", i);
    }
    return 0;
}
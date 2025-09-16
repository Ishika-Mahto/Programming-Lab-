#include <stdio.h>
int main()
{
    int n,i,a=0,b=1,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=b;
        b=a+b;
        sum = sum + a;
    }
    printf("\n");
    printf("The sum of the series is : %d",sum);
    return 0;
}
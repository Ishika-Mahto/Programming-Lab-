#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter a and b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("The values before change : %d, %d\n",a,b);
	a = a+b;
	b=a-b;
	a=a-b;
	printf("The values after change : %d, %d",a,b);
	return 0;
}
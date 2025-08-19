#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a and b");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("The values before change : %d, %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("The values after change : %d, %d",a,b);
	return 0;
}
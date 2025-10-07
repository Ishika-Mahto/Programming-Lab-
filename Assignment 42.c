#include<stdio.h>
int main()
{
	int a,b,c,area,peri;
	printf("Enter sides of a triangle : ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	area= a*b*c;
	peri = a+b+c;
	if(area==peri)
		printf("Equable triangle");
	else
		printf("Not an equable triangle");
	return 0;
}
#include <stdio.h>
int main()
{
	int num;
	printf("Enter the year to check whether leap year or not : ");
	scanf("%d",&num);
	if(num%4==0)
		if(num%100==0 && num%400==0)
			printf("The year is a leap year.");
	else 
		printf("The year is not a leap year.");
	return 0;
}
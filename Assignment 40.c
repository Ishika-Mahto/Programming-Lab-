#include<stdio.h>
int main()
{
	int num,rem;
	printf("Enter a number : ");
	scanf("%d",&num);
	rem=num%10;
	if(num%7==0 || rem==7)
		printf("Buzz number");
	else
		printf("Not a buzz number");
	printf("\n");
	if(num%2==0)
		printf("Even number");
	else
		printf("Odd number");
		printf("\n");
	if (num>=0)
		printf("Positive number");
	else 
		printf("Negative number");
	return 0;
}
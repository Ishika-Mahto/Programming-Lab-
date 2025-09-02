#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers : ");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
		printf("The first number is greater.");
	else 
		printf("The second number is greater.");
	return 0;
}
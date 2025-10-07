#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("Enter the three numbers one by one : ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	if(num1==num2==num3)
		printf("All the numbers are equal");
	else 
		if(num1>num2 && num1>num3)
			max=num1;
		else if(num2>num1 && num2>num3)
			max=num2;
		else if(num3>num1 && num3>num2)
			max=num3;
		printf("The graetest amoung all is : %d",max);
	printf("\n");
	if(num1>0 && num2>0 && num3>0)
		printf("All positive numbers");
	else if(num1<0 && num2<0 && num3<0)
		printf("All negative numbers");
	else
		printf("Mixed positive and negative numbers");
	return 0;
}
#include <stdio.h>
int main()
{
	float principal, rate, time, simple_interest;
	printf("Enter principal, rate and time : \n");
	scanf("%f",&principal);
	scanf("%f",&rate);
	scanf("%f",&time);
	simple_interest = (principal*time*rate)/100;
	printf("The simple interest is : %f",simple_interest);
	return 0;
}
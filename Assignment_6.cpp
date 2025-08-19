#include <stdio.h>
int main()
{
	float principle, rate, time, simple_interest;
	printf("Enter principle, rate and time : \n");
	scanf("%f",&principle);
	scanf("%f",&rate);
	scanf("%f",&time);
	simple_interest = (principle*time*rate)/100;
	printf("The simple interest is : %f",simple_interest);
	return 0;
}
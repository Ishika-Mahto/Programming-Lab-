#include <stdio.h>
int main()
{
	float value_f, value_c, ;
	printf("Enter the value in fahrenheit : \n");
	scanf("%f",&value_f);
	printf("Enter the value in celcius : \n");
	scanf("&f",&value_c);
	c = 5/9*(value_f-32);
	f = (9/5*value_c)+32;
	printf("Fahrenheit to celcius is : %f",c);
	printf("Celcius to fahrenheit is : %f",f);
	return 0;
}
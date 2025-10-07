#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age : ");
	scanf("%d",&age);
	switch(age>=18)
	{
		case 1:
			printf("Elegible to vote");
			break;
		case 0:
			printf("Not elegible to vote");
			break;
		default:
			printf("Wrong input");
	}
	return 0;
}
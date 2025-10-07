#include<stdio.h>
int main()
{
	int weight,charge;
	printf("Enter the weight of the parcel : ");
	scanf("%d",&weight);
	if(weight<=10)
		charge = weight*30;
	else if (weight>10 && weight<=30)
		charge = ((weight-10)*30)+ (10*30);
	else
		charge = (10*30) + (20*20) + ((weight-30)*15);
	printf("The charge for the parcel : %d",charge);
	return 0;
}
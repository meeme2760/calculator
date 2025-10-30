#include <stdio.h>

int main(void)
{
	int  principal,duration,interest,total_amount, Rate=10;
	printf("enter principal amount: ");
	scanf("%d",&principal);
	printf("enter duration in years: ");
	scanf("%d",&duration);
	
	if(principal<50000)
	{
		interest= principal*Rate*duration/100;
	}
	else
	{
		interest= principal*0.2*duration;
	}
	int total=principal+interest;
	printf("interest amount earned %d\n",interest);
	printf("total amount %d\n",total);
	return 0;
		
}

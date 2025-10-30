#include<stdio.h>
int main()
{ 
	int num;
	int mod;
	do
{
	printf("enter number: ");
	scanf("%d",&num);
	
	mod=num %2;
	if (mod==0)
	{
		printf("the value %d is even\n", num);	
		
	}
	else 
	{
		printf ("the value %d is odd\n", num);
	}
	
	}while(true);
	return 0;
}

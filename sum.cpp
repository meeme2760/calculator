#include<stdio.h>
int sum();
int main()
{
	printf("\nGoing to calculate the sum of two numbers:");
	sum(); //function call
}
	int sum()
	{
		int a,b;
		printf("\nEnter two numbers");
		scanf("%d %d",&a,&b);
		printf("The sum is %d"a+b);
}

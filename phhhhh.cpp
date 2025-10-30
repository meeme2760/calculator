#include<stdio.h>
int sum();
int area();
int averag()
int main()
{
	printf("\nGoing to calculate the sum of two numbers:");
	sum(); //function call
	printf("\nGoing to calculate the area:");
	area(); //function call
}
	int sum()
	{
		int a,b;
		printf("\nEnter two numbers");
		scanf("%d %d",&a,&b);
		printf("The sum is %d",a+b);
}
int area()
{

        int l,w;
        printf("\nEnter two numbers");
        scanf("%d %d",&l,&w);
        printf("The area is %d",l*w);
	}
	int average()
	{
		int d,e,f;
		printf("\nGoing to calculate the average of three numbers:");
		scanf("%d %d %d",&d&e&f);
		printf("The average is %d \n\n",(e+d+f)/3 );
	}

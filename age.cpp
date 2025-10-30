#include<stdio.h>

int main()

{
	int marks;
	printf("enter the students marks: \n");
	scanf("%d",&marks);
	if (marks>=75 && marks<100)
	{
		printf("The grade is A");
	
	}
	else if(marks>=60 && marks<75)
	{
		printf("The grade is B");
	}
	else if(marks>=50 && marks<60)
	{
		printf("The grade is C");
	
	}
	else if(marks>=40 && marks<50)
	{
		printf("The grade is D");
	}
	else if(marks>=0 && marks<40)
	{
		printf("The grade is E");
	}
	else
	{
		printf("the mark is invalind!");
	}
	
	return 0;
}

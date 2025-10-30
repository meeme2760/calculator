#include <stdio.h>

int main ()
{
	int volume,pi=3.142,height;
	int radius;
	
	printf("enter radius");
	scanf("%d",&radius);
	int R=radius*radius;
	printf("enter hight");
	scanf("%d",&height);
	volume=pi*R*height;
	printf("The volume of cylinder is: %d",volume);
	
}

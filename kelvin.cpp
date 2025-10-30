#include<stdio.h>

int main(void)
{
	double average;
	int count = 0;
	int total = 0;
	char choice;
	char name[50];
	int marks;
	printf("Welcome to the Student Grade Management System\n");
	
	do{
	printf("Enter student name: ");
	scanf("%49s",name);
	printf("Enter marks (0 - 100): ");
	scanf("%d",&marks);
	total += marks;
	count++;

	
switch(marks/10){
	case 9:
		printf(" %s scored %d - Grade: A\n",name,marks); 
		break;
	case 8: 
	printf(" %s scored %d - Grade: B\n",name,marks); 
	break;
	case 7: 
	printf(" %s scored %d - Grade: C\n",name,marks); 
	break;
	case 6: 
	printf(" %s scored %d - Grade: D\n",name,marks); 
	break;
	default: 
	printf(" %s scored %d - Grade: F\n",name,marks);
	break;
	
}
	printf("Do you want to enter another student? (y/n): ");
	scanf(" %c", &choice);	
	}while(choice == 'y' || choice == 'Y');
		
		printf("total student: %d\n",count);
		average = (double) total / count;
printf("Class average: %.2lf\n", average);
printf("Thank you for using the Grade System!\n");

return 0;

}

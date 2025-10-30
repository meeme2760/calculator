#include <stdio.h>



int main(void)
{
	int amount;
	int balance=0;
	int option;
	printf("Welcome to Equity bank atm\n");
while(1)
	printf("select an option\n");
	printf("1. Deposit\t\t2.Balance\n3.Withdraw\t\t4.Exit\n");

scanf("%d",&option);
printf("Enter an option:\n");
switch(option)
{
	case 1:
	printf("how much do you wish to deposit\n");
	scanf("%d",&amount);
	balance +=amount;
	break;
	case 2:
	printf("your balance is: %d\n",balance);
	break;
	case 3:
	printf("how much do you wish to withdraw\n");
	break;
	case 4:
	printf("Thank u for using our atm\n");
	break;
	default:
	printf("enter a valid value within the provided choices\n");
	break;
	
}
	
	
}


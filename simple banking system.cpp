#include<stdio.h>


int main (void){


	float withdrawal;
	float deposit;
	int choice;
	float balance=100.00;

do{

	printf("Welcome To My Simple Banking System\n");
	printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
	printf("Please Enter your Choice:");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("your balance is: %.2f\n",balance);	
	}
	else if(choice==2)
	{
		printf("How Much Do You Wish To Deposit\n");
		scanf("%f",&deposit);
		balance+=deposit;
		printf("You have successifully deposited:%.2f\n your new balance is:%.2f\n",deposit,balance);
	}
	else if(choice==3)
	{
		
		printf("How much money would you like to Withdraw\n");
		scanf("%f",&withdrawal);
		if (balance>=withdrawal)
		{
		balance-=withdrawal;
		printf("you have successifully withdrawn:%.2f\nyour ney balance is:%.2f\n",withdrawal,balance);	
		}
		else
		{
			printf("insufficient balance in your account\nYour balance is: %.2f\n",balance);
		}
	}
	else if(choice==4)
	{
		printf("thank you for using my Simple Banking System");
	}
	else
	{
		printf("invalind choice");
	}
}while(choice!=4);
	
}



#include <stdio.h>

int main(void) {
    double num1;
    double num2;
    char op;
    char choice;

    printf("Welcome to Albert Calculator\n");
do{


    printf("Enter number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // note space before %c to catch newline

    printf("Enter number: ");
    scanf("%lf", &num2);

    switch(op) {
        case '+':
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Enter a valid operator!\n");
            break;
    }
     printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
	}while(choice == 'y' || choice == 'Y');
	 printf("\nThank you for using Albert Calculator. Goodbye!\n");

    return 0;
}


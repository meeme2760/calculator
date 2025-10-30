#include <stdio.h>
#include <math.h>

int main()
{
    double num1, SQUAREROOT;

    printf("Enter any number to find the square root:\n");
    scanf("%lf", &num1);  // Use %lf for double input

    SQUAREROOT = sqrt(num1);  // Correct spelling and type

    printf("Square root is = %.2lf\n", SQUAREROOT);  // Use %lf for double output, limit to 2 decimals
    return 0;
}


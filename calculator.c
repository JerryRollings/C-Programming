/*
Name: Jerry Rollings Odhiambo
Reg No: ENE212-0265/2020
*/

#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float sum;
    float difference;

    printf("Enter first number: \n");
    scanf("%f", &num1);
    printf("Enter second number: \n");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;

    printf("The sum of your two numbers is: %f\n", sum);
    printf("The difference of your two numbers is: %f\n", difference);

    return 0;
}

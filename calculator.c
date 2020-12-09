#include<stdio.h>
#include<stdlib.h>

void main() {
    double num1,num2;

    printf("Enter first number : ");
    scanf("%lf",&num1);
    printf("Enter first number : ");
    scanf("%lf",&num2);

    printf("Answer: %.3lf\n", num1+num2);
}
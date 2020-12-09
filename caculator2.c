#include <stdio.h>
#include <stdlib.h>

void main() {
    double num1, num2;
    char op;
    printf("Enter a number : ");
    scanf("%lf", &num1);
    printf("Enter operator : ");
    scanf(" %c", &op);
    printf("Enter a number : ");
    scanf("%lf", &num2);

    if(op=='+')
        printf("%.4f\n", num1+num2);
    else if(op=='-')
        printf("%.4f\n", num1-num2);
    else if(op=='*')
        printf("%.4f\n", num1*num2);
    else if(op=='/')
        printf("%.4f\n", num1/num2);
    else
        printf("Invalid operator !");
}
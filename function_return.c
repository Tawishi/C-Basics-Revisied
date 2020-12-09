#include<stdio.h>
#include<stdlib.h>

double cube(double num) {
    return num*num*num;
}

void main() {
    printf("Answer : %.4f\n", cube(3.2));
}

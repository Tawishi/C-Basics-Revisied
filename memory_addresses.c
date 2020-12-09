#include<stdio.h>
#include<stdlib.h>

void main() {
    int age = 19;
    double gpa = 3.5;
    char grade = 'A';
    printf("age at %p\n", &age);
    printf("gpa at %p\n", &gpa);
    printf("grade at %p\n", &grade);
}
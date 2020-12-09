#include<stdio.h>
#include<stdlib.h>

void main() {
    int age = 19;
    double gpa = 3.5;
    char grade = 'A';

    int * pAge = &age;
    double * pGpa = &gpa;
    char * pGrade = &grade;

    printf("age at %p\n", pAge);
    printf("age is %d\n", *pAge);
    printf("gpa at %p\n", pGpa);
    printf("gpa is %lf\n", *pGpa);
    printf("grade at %p\n", pGrade);
    printf("grade is %c\n", *pGrade);
}
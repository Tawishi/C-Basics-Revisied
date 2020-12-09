#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
    char name[20];
    char major[10];
    int age;
    double gpa;
};

void main() {
    struct student student1;
    strcpy(student1.name, "Aditi");
    strcpy(student1.major,"Physics");
    student1.gpa = 3.5;
    student1.age = 18;

    struct student student2;
    strcpy(student2.name, "Tanu");
    strcpy(student2.major,"Art");
    student2.gpa = 3.6;
    student2.age = 16;

    printf("Name : %s\n", student1.name);
    printf("Major : %s\n", student2.major);
}
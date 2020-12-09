#include<stdlib.h>
#include<stdio.h>

//driver function
void main() {
    char yourName[20];
    printf("Enter name : ");
    scanf("%s", yourName);
    void sayhi(char []);
    sayhi(yourName);
}

void sayhi(char name[]) {
    printf("Hi %s.\n", name);
}
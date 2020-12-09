#include<stdio.h>
#include<stdlib.h>

void main() {
 char name[20];
 int age;
 /*
 printf("Enter your name : ");
 scanf("%s", name);
 */
 printf("Enter your name : ");
 fgets(name, 20, stdin); //arguments: (variable, limit, console; from where); takes to newline on entering ENTER in console
 printf("Enter your age : ");
 scanf("%d", &age);
 printf("%s is %d years young\n",name,age);
}

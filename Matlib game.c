#include<stdlib.h>
#include<stdio.h>
void main() {
    char color[20],plural[20],celeb[50];
    printf("Enter a color : ");
    scanf("%s", color);
    printf("Enter a plural noun : ");
    scanf("%s", plural);
    printf("Enter a celebrity : ");
    scanf("%s", celeb);

    printf("Roeses are %s\n",color);
    printf("%s are blue\n",plural);
    printf("I love %s\n",celeb);
}
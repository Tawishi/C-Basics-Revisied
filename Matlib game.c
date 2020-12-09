#include<stdlib.h>
#include<stdio.h>
void main() {
    char color[20],plural[20],celebF[20], celebL[20];
    printf("Enter a color : ");
    scanf("%s", color);
    printf("Enter a plural noun : ");
    scanf("%s", plural);
    printf("Enter a celebrity : ");
    scanf("%s%s", celebF, celebL);

    printf("Roses are %s\n",color);
    printf("%s are blue\n",plural);
    printf("I love %s %s\n",celebF, celebL);
}
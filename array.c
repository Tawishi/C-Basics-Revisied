#include<stdio.h>
#include<stdlib.h>

void main() {
    int numbers[] = {2,4,6,8,10};
    printf("%d\n", numbers[1]);
    numbers[1]=20;
    printf("%d\n",numbers[1]);
}
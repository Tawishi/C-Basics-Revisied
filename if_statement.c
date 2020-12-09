#include <stdlib.h>
#include <stdio.h>

int max(int num1,int num2, int num3) {
    if(num1>=num2 && num1>=num3)
        return num1;
    else if(num2>=num1 && num2>=num3)
        return num2;
    else 
        return num3;
}

void main() {
    int num1,num2;
    printf("%d\n",max(10,65,50));
}
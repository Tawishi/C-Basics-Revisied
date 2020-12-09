#include<stdio.h>
#include<stdlib.h>

void main() {
    int num[][2] = {
        {1,2},
        {4,5},
        {10,8},
    };
    printf("%d\n",num[0][1]);
    printf("\n");

    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++)
            printf("%d ",num[i][j]);
        printf("\n");
    }
}
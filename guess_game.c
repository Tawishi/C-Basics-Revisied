#include<stdio.h>
#include<stdlib.h>

void main() {
    int secretNumber = 9;
    int guess;
    while(guess != secretNumber) {
        printf("Enter a number : ");
        scanf("%d", &guess); 
    }
    printf("You win !");
}
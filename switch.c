#include<stdio.h>
#include<stdlib.h>

void main() {
    char grade='A';
    switch(grade) {
        case 'A': printf("You did excellent !");
                break;
        case 'B': printf("You did good.");
                break;
        case 'C': printf("You did ok.");
                break;
        case 'D': printf("You did bad.");
                break;
        case 'F':printf("You failed. Good luck next time.");
                break;
        default : 
        printf("Invalid grade.");
        exit(0);
    }
}
#include<stdio.h>
#include<stdlib.h>

void main() {
    //pointer to physcical file
    FILE * fptr = fopen("employees.txt","a");

    //write to file
    fprintf(fptr, "Sam,Clerk\nTim,Receptionist\n");
    fclose(fptr);
}
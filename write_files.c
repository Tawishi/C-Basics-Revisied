#include<stdio.h>
#include<stdlib.h>

void main() {
    //pointer to physcical file
    FILE * fptr = fopen("employees.txt","w");

    //write to file
    fprintf(fptr, "Jim,Salesman\nPam,Engineer\nRam,Scientist");

    //read from file
    

    fclose(fptr);
}
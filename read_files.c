#include<stdio.h>
#include<stdlib.h>

void main() {
    //pointer to physcical file
    char line[255];
    FILE * fptr = fopen("employees.txt","r");

    //read from file, line by line
    fgets(line,255,fptr); //goes to next line

    //fgets(line,255,fptr);
    //fgets(line,255,fptr);
    
    fclose(fptr);

    printf("%s", line);
}
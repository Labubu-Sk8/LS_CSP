// First program in C 

#include <stdio.h>

int main(){

    char person[50];
    printf("Whats your name?\n");
    scanf("%s", &person);
    printf("Hello %s, Welcome to your first C program!", person);

    
    return 0;


}
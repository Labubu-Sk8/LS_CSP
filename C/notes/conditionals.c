// LS Conditionals notes

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int grade = 92;
    bool admin = true;

    if(grade >= 90){
        if(grade > 93){
             printf("You have a %d percent. Thats a A!\n", grade);
        }else{
            printf("Oh no! You have a %d, that is an A-!\n", grade);
        }

    }else if(grade >= 80){
        printf("You have a %d percent. Thats a B!\n", grade);
    }else if(grade >= 70){
        printf("You have a %d percent. Thats a C!\n", grade);
    }else if(grade >= 60){
        printf("You have a %d percent. Thats a D!\n", grade);
    }else{
        printf("Oh no! You have a %d, that is failing!\n", grade);
    };

    int num = -27;

    if(num%2 == 0 && (num <10 && num > -10)){
        printf("%d is a single digit even number\n", num);
    }else if(num%2 != 0 && (num <10 && num > -10)){
        printf("%d is a single digit odd number\n", num);
    }else{
        printf("%d is not a single digit number!\n", num);
    }

    char name[] = "Cora";

    if (strcmp(name, "Cora") == 0){
        printf("Welcome Admin!\n");
    }else{
        printf("Hello %s\n", name);
    }


    return 0;
}
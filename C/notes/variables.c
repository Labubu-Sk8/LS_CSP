// this is a comment in C
#include <stdio.h> // lets us create inputs and outputs

int main(){
    int number = 12;//statements end with semicolons always;
    float pi = 3.14;\
    char name[] = "Xavier";
    char person[50];
    int age; 

    printf("Tell me your name\n");
    scanf("%s", &person);

    printf("Tell me how old you are\n");
    scanf("%d", &age);

    printf("Name is %s and age is %d\n", person, age);
    printf("We have the number %d\n", number);
    printf("%f\n", pi); // \n tells the computer to move to the next line
    printf("%s is %d years old\n", name, age);
    return 0; //always the last line of main
}
// d = integer, f = float, c = 1 character, s = string; which depeneds on what goes after the precent symbol when inside parenthesis
//LS functions notes in C

#include <stdio.h>
//Example 1
int add(int num_one, int num_two){
    return num_one + num_two;
}
//Example 2(no return)
void greeting(char* name){
    printf("Hello %s. Welcome to my program!\n", name);
}


//Example 3
float area(int length, int width){
    return (float) length * width;
}

int main(){
    //example 1 continued(function as value of variale)
    int total = add(40, 2);
    printf("%d\n", total);
    //example 2 continued(call the same function many times)
    greeting("Alex");
    greeting("Katie");
    greeting("Andrew");
    greeting("Tia");
    
    //Example 3 continued(call function directly in print statements)
    float rectangle = area(10, 5);
    printf("The area is: %.2f\n", rectangle);
    printf("The area is: %.2f\n", area(4,6));

// function == method == procedure same meaning but just 3 different words
    return 0;
}
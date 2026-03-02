// LS Lists notes and examples 
#include <stdio.h>
// lists aren't called lists in C they are called "array"
int main(){
    int grades[] = {74, 88, 95, 87, 98};
    printf("%d\n", grades[2]);

    //Example 2
    float sizes[] = {3.57, 24.95, 36.1, 5.99};
    // change an item in a list
    printf("%.2f\n", sizes[0]);
    sizes[0] = 10.45;
    printf("%.2f\n", sizes[0]);

    // Example 3
    char names[][20] = {"Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "xavier", "Jake"};
//[][] = first bracket how many items I can have in my list/array, second bracket how many characters i can have in each string
    *names[5] = " "; // how to replace an item in your array or list
    printf("%s\n", names[5]);

    return 0;
}
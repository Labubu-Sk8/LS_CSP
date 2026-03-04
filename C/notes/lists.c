// LS Lists notes and examples 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    //*names[5] = " "; how to replace an item in your array or list
    printf("%s\n", names[5]);


    // for loops example 1
    for(int i = 20; i >= 0; i--){
        printf("%d ", i);
    }

    // for loop example 2
    srand(time(NULL));
    int guess = 0;

    for(int num = rand() %20 +1; num != guess; num = num){
        printf("\nGuess a number between 1 and 20: ");
        scanf("%d", &guess);
        if (guess == num){
            printf("Yow Won!\n");
            break; // gets you out of the loop
        }else if (guess < num){
            printf("Your guess is too low\n");
        }else{
            printf("Your guess is too high\n");
        }
    }
    printf("Game over!\n");
    // for loop exmaple 3 
    int length = sizeof(names)/ sizeof(names[0]);

    for(int x = 0; x < length; x++){
        printf("%s LaRose\n", names[x]); // x is the index number thats what it stands for2

    }

// & works as somewhat of an location finder
    return 0;
}
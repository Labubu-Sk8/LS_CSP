// LS while loops examples etc.

#include <stdio.h>
// Includes to get a random number
#include <stdlib.h>
#include <time.h>

int main(){
    int i = 1;
    while (i <=10){
        printf("%d\n", i);
        i++;//increases it by one!
    }
    //generate a random number
    srand(time(NULL));

    printf("%d\n", rand() % 10); //random between  0 and 10 
    printf("%d\n", (rand() % 4) +1); //random between 1 and 5
    printf("%d\n", rand() % 20);


    // Example 2
    srand(time(NULL));
    int goose = (rand() % 9) + 1;
    int count = 1;

    while (count < goose){
        printf("Duck!\n");
        count++; // ++ increases by 1, -- decreases by 1
    }
    printf("Gooose!\n");

    //Example 3
    int timer = 30;
    while (timer > 0){
        printf("%d\n", timer);
        timer = timer - 2;
    }
    printf("Times up");
    return 0;
}
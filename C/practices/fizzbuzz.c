// LS Fizzbuzz game 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int i = 0;
    for( i = 1; i <= 50; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("FizzBuzz\n");
        }else if(i % 3 == 0){
            printf("Fizz\n");
        }else if(i % 5 == 0){
            printf("Buzz\n");
        }else{
            printf("%d\n", i);
        }
    }
return 0;
}
// LS Time of day practice assignmemt

#include <stdio.h>
#include <string.h>

int main(){
    int military_time;
    printf("Hello! What time is it in military time?\n");
    scanf("%d", &military_time);

    if(military_time >= 12 && military_time <= 15){
         printf("Good Afternoon!\n");
    }else if(military_time < 11){
        printf("Good Morning!\n");
    }else{
        printf("Good Evening!\n");
    }
       
return 0;
}
    
   


    

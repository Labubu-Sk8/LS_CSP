// LS silly sentences or madlib assignment

#include <stdio.h>
#include <string.h>
int main(){
    char place[25];
    char person[25];
    char adjective[25];
    char noun[25];
    char verb_past_tense[25];
    char noun_2[25];
    

    printf("Welcome to Madlib!\n");

    printf("Give me a one word place\n");
    scanf("%s", &place);
    
    printf("Give me a person\n");
    scanf("%s", &person);
    

    printf("Give me an adjective \n");
    scanf("%s", &adjective);
 

    printf("Give me a noun\n");
    scanf("%s", &noun);
    

    printf("Give me a verb ending with -ed\n");
    scanf("%s", &verb_past_tense);
    

    printf("Today, I went to the %s with %s. First, we headed out to the %s, and it was really %s. Afterwards, we %s at the %s street dancer. It was an amazing day \n", place, person, adjective, noun, verb_past_tense, noun_2);




    return 0;


}


// LS silly sentences or madlib assignment

#include <stdio.h>
int main(){
    float place[25];
    float person[25];
    float adjective[25];
    float noun[25];
    float verb_past_tense[25];
    float noun_2[25];
    float adjective_2[25];

    printf("Welcome to Madlib!\n");

    printf("Give me a place\n");
    scanf("%f", &place);
    
    printf("Give me a person\n");
    scanf("%f", &person);
    

    printf("Give me an adjective \n");
    scanf("%f", &adjective);
 

    printf("Give me a noun\n");
    scanf("%f", &noun);
    

    printf("Give me a past tense verb\n");
    scanf("%f", &verb_past_tense);
    

    printf("Today, I went to the %f with %f. First, we headed out to the %f, and it was really %f. Afterwards, we %f at the %f street dancer. It was an %f day \n", place, person, adjective, noun, verb_past_tense, noun_2, adjective_2);




    return 0;


}


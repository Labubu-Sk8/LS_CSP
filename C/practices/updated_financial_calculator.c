// LS updated financial calculator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float income;
float rent;
float utilities;
float groceries;
float transportation;
float savings;
float spending_money;
void question(char* question){
    printf("What is your monthly %s: \n", question);
    scanf("%f\n",question);

} 

int main(){
   question("income");
   question("rent");
   question("utilities");
   question("groceries");
   question("transportation");
  


    return 0;
}
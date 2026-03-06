// LS updated financial calculator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float income;
float rent;
float utilities;
float groceries;
float transportation;
float savings;
float spending_money;
void question(char* question){
    printf("What is your monthly %s: \n", question);
    

} 
float savings(int incomes, int percent){
    return (float) incomes * percent;
}

int main(){
   question("income");
   scanf("%f", &income);
   while (getchar() != '\n');

   question("rent");
   scanf("%f",&rent);
   while (getchar() != '\n');

   question("utilities");
   scanf("%f", &utilities);
   while (getchar() != '\n');
   
   question("groceries");
   scanf("%f",&groceries);
   while (getchar() != '\n');

   question("transportation");
   scanf("%f",&transportation);
   while (getchar() != '\n');

   float money = savings(income, 0.10);
  


    return 0;
}
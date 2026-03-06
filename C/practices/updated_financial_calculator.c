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
int spending(int income, int rent, int utilities, int groceries, int transportation, int savings){
    return income - (rent + utilities + groceries + transportation + savings);
}
int division(int rent, int income, int utilites, int groceries, int transportation){
    return (rent/income) * 100, (utilites/income) * 100, (groceries/income) * 100, (transportation/income) * 100;
}
int calc(savings, income){
    return savings = income * 0.10;
}
int main(){
   question("income");
   scanf("%f", &income);
   while (getchar() != '\n');
   
   question("rent");
   scanf("%f", &rent);
   while (getchar() != '\n');
   

   question("utilities");
   scanf("%f", &utilities);
   while (getchar() != '\n');
   
   
   question("groceries");
   scanf("%f", &groceries);
   while (getchar() != '\n');
   
   

   question("transportation");
   scanf("%f", &transportation);
   while (getchar() != '\n');
   
  


    printf("\nYour rent is $%.2f and that is %.2f percent of your income.\n", rent, division);
    printf("Your utilities are $%.2f and that is %.2f percent of your income.\n", utilities, division);
    printf("Your groceries are $%.2f and that is %.2f percent of your income.\n", groceries, division);
    printf("Your transportation is $%.2f and that is %.2f percent of your income.\n", transportation, division);
    printf("You should save $%.2f a month, that is %.2f percent of your income.\n", calc);
    printf("You have $%.2f of spending money each month!\n", spending);

   
   
  


    return 0;
}
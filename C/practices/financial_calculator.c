// LS finacial calculator
#include <stdio.h>
#include <math.h>
int main(){

    float income;
    float rent;
    float utilities;
    float groceries;
    float transportation;
    float savings;
    float spending_money;

    printf("What is your monthly income: ");
    scanf("%f", &income);
    while (getchar() != '\n');

    printf("What is your monthly rent/mortgage: ");
    scanf("%f", &rent);
    while (getchar() != '\n');

    printf("What is your monthly utilities: ");
    scanf("%f", &utilities);
    while (getchar() != '\n');

    printf("What is your monthly groceries: ");
    scanf("%f", &groceries);
    while (getchar() != '\n');

    printf("What is your monthly transportation: ");
    scanf("%f", &transportation);
    while (getchar() != '\n');

    savings = income * 0.10; 
    spending_money = income - (rent + utilities + groceries + transportation + savings);

    printf("\nYour rent is $%.2f and that is %.0f%% of your income.\n", rent, (rent / income) * 100);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, (utilities / income) * 100);
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, (groceries / income) * 100);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, (transportation / income) * 100);
    printf("You should save $%.2f a month, that is 10%% of your income.\n", savings);
    printf("You have $%.2f of spending money each month!\n", spending_money);

    return 0;
}
    




// LS updated financial calculator

#include <stdio.h>
#include <math.h>

float get_input(char* prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}
float calculate_percent(float income, float expense) {
    return (expense / income) * 100;
}
int main(void) {
    float income = get_input("Whats your monthly income: ");
    float rent = get_input("Whats your monthly rent/mortgage: ");
    float utilities = get_input("Whats your monthly utilities: ");
    float groceries = get_input("Whats your monthly groceries: ");
    float transportation = get_input("Whats your monthly transportation: ");

    printf("Your rent is $%.2f and that is %.0f%% of your income.\n", rent, calculate_percent(income, rent));
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, calculate_percent(income, utilities));
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, calculate_percent(income, groceries));
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, calculate_percent(income, transportation));

    float savings = income * 0.10;
    printf("You should save $%.2f a month, that is 10%% of your income.\n", savings);

    float total_expenses = rent + utilities + groceries + transportation + savings;
    float spending_money = income - total_expenses;
    printf("You have $%.2f of spending money each month!\n", spending_money);

    return 0;
}

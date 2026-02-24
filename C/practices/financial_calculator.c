// LS finacial calculator
#include <stdio.h>
#include <math.h>
int main(){
    int income = printf("What is your monthly income: \n");
    scanf("%d", income);
    int utilities = printf("What is your monthly utilities spend: \n");
    scanf("%d", utilities);
    int groceries = printf("What is your monthly spend on groceries: \n");
    scanf("%d", groceries);
    int transportation = printf("What is your monthly spend on transportation: \n");
    scanf("%d", transportation);

    char savings = income * 0.10;
    printf("%c", savings);
    
    

    return 0;

}



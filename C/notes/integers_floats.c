// integers and floats notes 

#include <stdio.h>
#include <math.h>

int main(){
    int apples = 10;
    int people = 6;
    int hour = 12;
    int minutes = hour * 60;
    
    printf("%d, %d, %d", apples, people, hour);

    printf("%f\n", (float)apples/people);
    printf("%d hours is %d minutes\n", hour, minutes);

    float pi = 3.14;
    float liters = 8.3;
    float years = 22.5;
    float cups = liters * 4.22675;

    printf("%f, %.1f, %.2f\n", pi, liters, years);
    printf("%.1f liters is %.1f cups\n", liters, cups);
    printf("%.2f in Ferenheit is %.2f in Celsius", 70.0, (70.0- 32)*5/9);

    printf("%f\n",(int)pow(2, 3 )); // first number is the base number, second number is power number pow helps us do exponents


    return 0;
}
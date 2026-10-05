// 4. Write a program to calculate simple interest for a set of values representing principal,
// number of years, and rate of interest.




#include<stdio.h>

int main()
{

    float principle, years, rate, simple_interest;

    printf("enter the principle amount: ");
    scanf("%f",&principle);
    
    printf("enter the years: ");
    scanf("%f",&years);
    
    printf("enter the rate of interest: ");
    scanf("%f",&rate);

    simple_interest = (principle*rate*years)/100;
    printf("your simple interest: %.2f",simple_interest);
    
    return 0;

}
// 3. Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.


#include<stdio.h>

int main()
{

    float celsius, farenhite;
    printf("enter temperature in celcius: ");
    scanf("%f", &celsius);
    farenhite = (9.0 / 5.0) * celsius + 32;
    printf("temperature  in farenhite: %.2f",farenhite);

    return 0;

}
// 2. Write a function to convert Celsius temperature into Fahrenheit.


#include<stdio.h>

float feranhite(float cel)
{
    return(cel * 9 / 5) + 32;
}



int main()
{
    float cel = 30.0;

    printf("temperature in farenhite : %.2f F\n",feranhite(cel));
    
    return 0;
}

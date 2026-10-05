// 4. Write a function and pass the value by reference.


#include<stdio.h>

void value_reference(int*, int*);


void value_reference(int* a, int* b)
{
    *a = *a + 5;
    *b = *b + 5;
}

int main()
{
    int x =20, y = 25;

    printf("value of x: %d\nvalu of y: %d\n", x, y);

    value_reference(&x, &y);

    printf("value of x: %d\nvalu of y: %d\n", x, y);


    
    return 0;
}
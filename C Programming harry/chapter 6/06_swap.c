#include<stdio.h>



void swap(int* , int* );


void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main()
{
    int a= 5, b = 10;
    swap(&a , &b);
    printf("valu of a: %d\nvalue of b: %d",a ,b);
    
    return 0;
}
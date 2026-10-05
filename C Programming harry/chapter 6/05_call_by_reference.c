#include<stdio.h>

int sum(int*, int*);

int sum(int* a, int* b)
{
    *a = 3;
    return *a+*b;
}


int main()
{
    int x = 7, y = 10;
    
    printf("sum of a & b is : %d\n",sum(&x, &y));
    printf("sum of a & b is : %d\n",x);


    return 0;
}
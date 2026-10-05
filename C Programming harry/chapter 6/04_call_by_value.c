#include<stdio.h>

int sum(int, int);

int sum(int a, int b)
{
    return a+b;
}


int main()
{
    int x = 7, y = 10;
    printf("sum of a & b is : %d\n",sum(5,8));
    printf("sum of a & b is : %d\n",sum(x, y));


    return 0;
}
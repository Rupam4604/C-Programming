// 6. Write a recursive function to calculate the sum of first 'n' natural numbers.

#include<stdio.h>

int sum(int);

int sum(int n)
{
    if(n == 0 || n ==1)
    {
        return n;
    }
    return n + sum(n-1);
}

int main()
{
    int n = 5;
    printf("sum of first %d natural number is: %d\n", n, sum(n));
    
    return 0;
}
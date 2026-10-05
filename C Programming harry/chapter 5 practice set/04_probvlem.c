// 4. Write a program using recursion to calculate n
// th element of Fibonacci series.


#include<stdio.h>


int fibonaci(int);

int fibonaci(int n)
{
    if(n==0 || n == 1)
    {
        return n;
    }
    return fibonaci(n-1) + fibonaci(n-2);
}



int main()
{
    int n = 6;
    printf("the value of fibonaci serise of %d: %d\n", n, fibonaci(n));
    return 0;
}
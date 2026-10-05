// 8. Write a program to calculate the factorial of a given number using a for loop.

#include<stdio.h>

int main()
{   
    int n;
    int fact = 1;
    printf("Enter the number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n ; i++)
    {
        fact *= i ;
    }
    
    printf("the factorial of %d: %d", n, fact);
    

    return 0;
}
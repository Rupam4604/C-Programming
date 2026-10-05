// 8. Write a program to calculate the factorial of a given number using a for loop.
// 9. Repeat 8 using while loop

#include<stdio.h>

int main()
{
    int i = 1;
    int fact = 1;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    while (i <= n)
    {
        fact *= i ;
        i++;
    }
    printf("the factorial of %d: %d", n, fact);

    return 0;
}
// 1. Write a program to print the address of a variable. Use this address to get the value of
// the variable


#include<stdio.h>

int main()
{
    int i = 5;
    int* j = &i;
    printf("adress of variable i : %p\n",j);
    printf("value of the variable i : %d\n",*(&i));
    printf("value of the variable i : %d\n",*j);
    
    return 0;
}
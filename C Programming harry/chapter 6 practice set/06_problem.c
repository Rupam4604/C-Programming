// 6. Write a program to print the value of a variable i by using a pointer to pointer
// type variable.

#include<stdio.h>

int main()
{
   int i = 5;
   int* j = &i;
   int** k = &j;
   printf("value of variable i using poionter to pointe type variable is : %d",**k);


    return 0;
}
// 2. Write a program having a variable i . Print the address of i . Pass this variable to a
// function and print its address. Are these addresses the same? Why?


#include<stdio.h>

int returning_5(int* j)
{
    printf("the value of j is %u\n",j);
    printf("the value of j is %d\n",*j);

    return 5;

}

int main()
{
    int i = 5;
    int* j = &i;
    printf("adress of variable i : %u\n",&i);
    returning_5(j);
  
    
    return 0;
}
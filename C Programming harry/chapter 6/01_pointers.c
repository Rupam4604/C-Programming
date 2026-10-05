#include<stdio.h>

int main()
{
    int i = 5;
    int* j = &i; // j is pointer storing the adress of i
    int k = 70;
    printf("the address of i is : %p\n", &i);  //
    printf("the address of i is : %u\n", j);  // print the adress in integer
    printf("the address of i is : %u\n", &k);  // print the adress in integer

    printf("the valu of adress of j is : %d\n",*(&i)); // geting the value from adress

    printf("the valu of adress of j is : %d\n",*(&k));
    printf("the valu of adress of j is : %d\n",*(&j));


    return 0;
}
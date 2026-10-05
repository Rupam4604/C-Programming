#include<stdio.h>

int main()
{
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("the valu of i: %d\n",i);
    printf("the valu of i: %u\n",*j);
  
    printf("the valu of i: %d\n",**(&j));
    printf("the valu of i: %d\n",*(&i));
    

    return 0;
}
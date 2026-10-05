// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to
// the third element where ptr is a pointer pointing to the first element of the array.


#include<stdio.h>

int main()
{
    int arr[10] ;

    int* ptr = arr;

    for (int i = 0; i < 10; i++)
    {
        printf("enter the number of array %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("the value of ptr+2 is : %d\n",*(ptr+2));
    
    return 0;
}
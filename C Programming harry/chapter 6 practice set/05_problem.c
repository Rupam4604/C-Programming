// 5. Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main() .


#include<stdio.h>

int* sum(int a, int b)
{
    int s = a+b;
    int* ptr= &s;
    printf("the sum is: %d\n", s);
    return ptr;

}

float* average(int a, int b)
{
    float avg = (a+b)/2.0;
    float* ptr= &avg;
    printf("the sum is: %f\n", avg);
    return ptr;

}

int main()
{
    int x = 5;
    int y =7;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x,y);
    ptr2 = average(x,y);

    printf("adress of sum is : %u\nadress of average is : %u\n", ptr1, ptr2);
    
    
    
    return 0;
}
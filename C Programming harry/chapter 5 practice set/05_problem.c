// 5. What will the following line produce in a C program?
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

// Ans. 4 5 5 (wrong- evalutaion left to right)  6 6 4(evalutaion right to left)


#include<stdio.h>

int main()
{
    int a = 4;
     printf("%d %d %d \n", a, ++a, a++);
    
    return 0;
}
// 2. Write a program to print multiplication table of 10 in reversed order


// #include<stdio.h>

// int main()
// {

//     int i = 10;

//     while (i >=1)
//     {
//             printf("Multiplication of 10 : 10 x %d = %d \n", i, 10 * i);
//             i--;
//     }
    
//     return 0;

// }


// 2nd method

#include<stdio.h>

int main()
{

    int n = 10;
    for (int i = 10; i ; i--)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
    
    return 0;

}
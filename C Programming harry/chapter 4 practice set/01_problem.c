// 1. Write a program to print multiplication table of a given number n


// #include<stdio.h>

// int main()
// {

//     int i = 1;

//     while (i <= 10)
//     {
//         printf("multiplication of 5 x %d = %d \n",i , 5*i);
        
//         i = i + 1;
//     }
    
//     return 0;

// }


// 2nd method

#include<stdio.h>

int main()
{

    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i = 1; i <= 10 ; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }
    
    return 0;

}
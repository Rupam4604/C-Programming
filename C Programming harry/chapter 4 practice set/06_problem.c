// 5. Write a program to sum first ten natural numbers using while loop.

// 6. Write a program to implement program 5 using for and do-while loop.


// for loop

// #include<stdio.h>

// int main()
// {
//     int n = 0;

//     for (int i = 1; i <= 10; i++)
//     {
//         n += i;
//     }
//     printf("sum of first ten natural number is : %d \n",n);
    
//     return 0;

// }


// Do while

#include<stdio.h>

int main()
{
    int i =1, n= 0;

    do
    {
        
        n += i;
        i++;
    }
    while (i <= 10);
    printf("sum of first ten natural number is : %d \n",n);
    return 0;

}


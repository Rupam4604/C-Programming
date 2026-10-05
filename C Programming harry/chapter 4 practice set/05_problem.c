// 5. Write a program to sum first ten natural numbers using while loop



#include<stdio.h>

int main()
{

    int i = 1;
    int n = 0;
    


    while (i <= 10)
    {
        printf("%d + %d = %d \n", n, i, n + i);
        n = n+ i;
        i++;
    }
    
    
    return 0;

}



// 2nd method

// #include<stdio.h>

// int main()
// {

//     int i = 1;
//     int n = 0;
//     while (i <= 10)
//     {
//         n += i;
//         i++;
//     }
//     printf("sum of first ten natural number is : %d \n",n);
    

//     return 0;

// }
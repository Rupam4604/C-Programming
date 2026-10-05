// 10. Write a program to check whether a given number is prime or not using loops
// 11. Implement 10 using other types of loops


// while loop

// #include<stdio.h>

// int main()
// {
//     int prime = 0;
//     int i = 2;
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);

//     while (i < n)
//     {
//         if (n % i == 0)
//         {
//             prime = 1;
            
//         }
//         i++;
        
//     }
    

//     if (prime)
//     {
//         printf("%d is not prime number", n);
//     }
//     else
//     {
//         printf("%d is  prime number", n);
//     }
    
    
//     return 0;
// }

// Do while 

#include<stdio.h>

int main()
{

    int prime = 0;
    int i = 2;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    do
    {
        if (n % i == 0)
        {
            prime = 1;
            
        }
        i++;
    }
    while (i < n);

    
    if (prime)
    {
        printf("%d is not prime number", n);
    }
    else
    {
        printf("%d is  prime number", n);
    }


    
    return 0;
}
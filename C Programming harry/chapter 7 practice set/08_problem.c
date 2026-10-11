// 7. Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and 9 respectively.
// 8. Repeat problem 7 for a custom input given by the user.



// 1st method 

// #include<stdio.h>

// int main()
// {
//     int arr[3][10];
//     // int mul[]= {};
//     int n;
//     printf("enter the number for multiplication: ");
//     scanf("%d",&n);
    

//     for (int i = 0; i < 1; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j] = n * (j+1);
//         }
        
//     }

//     for (int i = 0; i < 1; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("the value of arr[%d] [%d] = %d\n", n, j+1 ,arr[i][j]);
            
//         }
//         printf("\n");
        
        
//     }
    

//     return 0;
// }


// 2nd method 

#include<stdio.h>

int main()
{
    int n1, n2, n3;
    printf("enter the number for multiplication: ");
    scanf("%d %d %d",&n1, &n2, &n3);

    int arr[3][10];
    int mul[] = {n1,n2,n3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("the value of arr[%d] [%d] = %d\n", mul[i], j+1 ,arr[i][j]);
            
        }
        printf("\n");
        
        
    }
    

    return 0;
}
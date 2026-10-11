// 9. Create a three-dimensional array and print the addresses of its elements in increasing order. 


#include<stdio.h>

int main()
{
    int arr[2][5][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%u\n",&arr[i][j][k]);
                
            }
            
        }
        
    }
    
    return 0;
}
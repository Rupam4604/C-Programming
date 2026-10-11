// 6. Write a program containing functions which counts the number of positive integers in
// an array.

#include<stdio.h>

int count(int a[], int n)
{
    int no_of_posative = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            no_of_posative++;
        }
        
    }
    return no_of_posative;

}

int main(){
    int a[] = {1, 2, -3, 4, -5, 6 };

    printf("the number of positive integers is : %d\n", count(a, 6));
    

    
    return 0;
}
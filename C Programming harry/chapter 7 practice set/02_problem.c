// 2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// i. True.
// ii. False.
// iii. Depends.

// ANS.  ii. False.


#include<stdio.h>

int main()
{
    int s[3] ;

    int* ptr = s;

    for (int i = 0; i < 3; i++)
    {
        printf("enter the number of array %d: ", i);
        scanf("%d", &s[i]);
    }

    printf("the value of ptr+2 is : %d\n",*(s+3));
    
    return 0;
}
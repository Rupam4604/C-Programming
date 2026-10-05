// 6. Write a program to find greatest of four numbers entered by the user.


#include<stdio.h>

int main()
{

    int num1, num2, num3, num4;

    printf("Enter number1: ");
    scanf("%d",&num1);

    printf("Enter number2: ");
    scanf("%d",&num2);

    printf("Enter number3: ");
    scanf("%d",&num3);

    printf("Enter number4: ");
    scanf("%d",&num4);


    if(num1 > num2 && num1 >num3 && num1 > num4)
    {
        printf("Number 1: %d is greatest",num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("Number 2: %d is greatest",num2);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("Number 3: %d is greatest",num3);
    }
    
    else
    {
        printf("Number 4: %d is greatest",num4);
    }
    


    return 0;

}
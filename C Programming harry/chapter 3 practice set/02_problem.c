// 2. Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there are
// three subjects and take the marks as input from the user.


#include<stdio.h>

int main()
{

    int sub1, sub2, sub3, total;
    printf("Enter the number of sub1: ");
    scanf("%d",&sub1);

    printf("Enter the number of sub2: ");
    scanf("%d",&sub2);

    printf("Enter the number of sub3: ");
    scanf("%d",&sub3);

    total = ((sub1 + sub2 + sub3) / 300) * 100;

    if (total >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33 ){
        printf("Student has passed.");
    }
    else{
        printf("Student failed.");
    }




    
    
    return 0;

}
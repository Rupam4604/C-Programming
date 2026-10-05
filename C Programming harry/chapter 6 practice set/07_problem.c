// // 3. Write a program to change the value of a variable to ten times its current value.

// 7. Try problem 3 using call by value and verify that it does not change the value of the
// variable.

#include<stdio.h>

int change_the_value_ten_times(int);


int change_the_value_ten_times(int a)
{
    return a = a * 10;
}



int main()
{
    int x = 20;

    printf("the value opf xL: %d\n",x);
    
    printf("%d\n",change_the_value_ten_times(x));

    printf("the value opf xL: %d\n",x);

    
    return 0;
}
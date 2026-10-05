// 3. Write a program to change the value of a variable to ten times its current value.


#include<stdio.h>

void change_the_value_ten_times(int*);


void change_the_value_ten_times(int* a)
{
    *a = *a * 10;
}



int main()
{
    int x = 20;

    printf("the value opf xL: %d\n",x);
    
    change_the_value_ten_times(&x);

    printf("the value opf xL: %d\n",x);

    
    return 0;
}
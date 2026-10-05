// Write a C program to calculate the area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user


// a.
/*
#include<stdio.h>

int main()
{
    int length = 5;
    int width = 8;
    printf("Area of rectangle is : %d", length * width);

    
    return 0;

}
*/
// b.

#include<stdio.h>

int main()
{

    int length;
    int width;
    printf("Enter length\n");
    scanf("%d", &length);
    printf("Enter width\n");
    scanf("%d", &width);
    printf("area: %d", length * width);

    return 0;

}
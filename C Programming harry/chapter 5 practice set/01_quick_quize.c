// Quick Quiz: Use the library function to calculate the area of a square with side a.
// Hint
// Use pow(a, 2) from <math.h> to calculate a².
// Formula
// Area of square = side × side = a²

#include<stdio.h>
#include<math.h>

int main()
{
    int a = 5;
    printf("area of this squre is %f\n", pow(a, 2));
    return 0;
}
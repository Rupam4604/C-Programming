// 2. Calculate the area of a circle and modify the same program to calculate the volume of
// a cylinder given its radius and height.


#include<stdio.h>

int main()
{

    float redius, area, volume, height ;

    const float PI = 3.14159;

    printf("Enter the redius: ");
    scanf("%f", &redius);

    printf("Enter the height: ");
    scanf("%f", &height);

    area = PI * redius * redius;
    printf("Area of circle: %f\n", area);

    volume = PI * redius * redius * height;
    printf("volume of a cylinder: %f", volume);
    
    return 0;

}
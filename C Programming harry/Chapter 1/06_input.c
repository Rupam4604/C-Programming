/* #include<stdio.h>

int main()
{
int a;
scanf("enter number: %d", &a);  // wrong
printf("%d",a);


}
*/
#include <stdio.h>

int main()
{
    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    printf("%d", a);

    return 0;
}
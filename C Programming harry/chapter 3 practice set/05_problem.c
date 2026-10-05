// 5. Write a program to determine whether a character entered by the user is lowercase or
// not.

/*
#include<stdio.h>

int main()
{

    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    printf("the ascii value: %d\n",ch);  // checking asci value
    // 97 - 122 // lowercase asci value of a -z
    if (ch >= 97 && ch <= 122)
    {
        printf("the character is lowercase \n");
    }
    else
    {
        printf("the character is not a lower case \n");
    }
    return 0;

}
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase letter");
    }
    else
    {
        printf("Not a lowercase letter");
    }

    return 0;
}
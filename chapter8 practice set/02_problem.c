// 2. Write a program to take string as an input from the user using %c and %s and
// confirm that the strings are equal.


// #include<stdio.h>

// int main()
// {
//     char st[6];
//     scanf("%s",st);
//     printf("%s\n",st);
    
    
//     return 0;
// }


#include<stdio.h>

int main()
{
    char st[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c\n",&st[i]);
        fflush(stdin);
        
    }
    st[5]= '\0';
    


    printf("%s\n",st);
    
    
    return 0;
}
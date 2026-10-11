// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char st[] = "rupam";
//     // printf("%c\n", st[0]);
//     // printf("%c\n", st[1]);
//     // printf("%c\n", st[2]);
//     // printf("%c\n", st[3]);
//     // printf("%c\n", st[4]);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c\n", st[i]);
//     }
//     size_t len = strlen(st);
//     printf("length: %d\n",strlen(st));
//     printf("length: %d\n",len);
//     printf("%s\n", st);
    
//     return 0;
// }


#include<stdio.h>


int main()
{
    char st[] = "rupam";
    // printf("%c\n", st[0]);
    // printf("%c\n", st[1]);
    // printf("%c\n", st[2]);
    // printf("%c\n", st[3]);
    // printf("%c\n", st[4]);
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", st[i]);
    }
    int len = 0;
    while (st[len] != '\0')
    {
        len++;
    }
    
    printf("length: %d\n",len);
    printf("%s\n", st);
    
    return 0;
}





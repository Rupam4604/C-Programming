// // 1. 
// // "strlen" is used for get the length of a string

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char st[] = "rupam ghosh";
    
//     printf("%d\n",strlen(st));    // strlen is used for get the length of a string
 
    
    
    
//     return 0;
// }


// // 2. 
// // "strcpy" is used for to copy from source to target

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char st[] = "rupam ghosh";
    
    

//     char target[30];
//     // strcpy(target,st); 
//     printf("%s \n %s\n",st,strcpy(target,st));    // strcpy is used for to copy from source to target 
    
    
    
//     return 0;
// }

// 3. 
// "strcat" is used to concatenate or mearged two string


// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char s1[] = "rupam ghosh";
//     char s2[] = " is leraning  python";
    
//     strcat(s1,s2);  // "strcat" is used to concatenate or mearged two string

//     printf("s1 is : %s\n",s1);
//     printf("s2 is : %s\n",s2);
    
    
    
    
//     return 0;
// }

// 4. 
// "strcmp" is used to compare two string


#include<stdio.h>
#include<string.h>

int main()
{
    int a = strcmp("hello","rimli");  // "strcmp" is used to compare two string. it retuns '0' if the strings are equle. 
    printf("%d",a);
    
    
    
    
    return 0;
}



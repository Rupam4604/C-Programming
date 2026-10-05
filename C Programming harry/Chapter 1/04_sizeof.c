#include <stdio.h>

int main(void)
{
    printf("char:  %zu bytes\n", sizeof(char));
    printf("int:   %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));

    return 0;
}
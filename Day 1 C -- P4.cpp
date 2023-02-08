#include<stdio.h>

int main()
{
    char str[50];   // char array of size 50
    printf("Enter your complete name:\n\n\n");

    gets(str);
    printf("\n\nHi,your name is  %s\n\n\n", str);
    return 0;
}

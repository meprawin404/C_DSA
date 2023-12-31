#include<stdio.h>
int main()
{
    char str[10];
    printf("Enter ur name: ");
    gets(str);
    printf("Hello, %s",str);
    return 0;
}
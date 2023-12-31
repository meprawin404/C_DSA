#include<stdio.h>
int main()
{
    char str[10];
    printf("Enter your name: ");
    fgets(str,10,stdin);
    printf("Hell, %s",str);
    return 0;
}
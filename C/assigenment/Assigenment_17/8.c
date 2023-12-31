// 8. Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char p[50],y[50];
    printf("Enter a string: ");
    scanf("%s",p);
    for (int i = 0; p[i]; i++)
    {
        y[i] = p[i];
    }
    printf("The copyed string is %s",y);
    return 0;
}
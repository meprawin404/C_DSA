//4. Write a program to convert a given string into uppercase 

#include<stdio.h>
#include<ctype.h>
int main()
{
    char p[50];
    printf("Enter the string: ");
    scanf("%s",p);
    for (int i = 0; p[i]; i++)
    {
        printf("%c",toupper(p[i]));
    }
    return 0;
}
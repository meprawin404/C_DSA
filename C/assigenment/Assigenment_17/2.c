// 2. Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>
int main()
{
    char p[50],c;
    printf("Enter the string: ");
    scanf("%s",&p);
    printf("Enter the character u want to count: ");
    scanf(" %c",&c);
    int i,count=0;
    for ( i = 0; p[i]; i++)
    {
        if (p[i]==c)
        {
            count++;
        }
    }
    printf("The number of time %c is in %s is %d",c,p,count);
    return 0;
}
// 6. Write a program to calculate the length of the string using a pointer

#include<stdio.h>
int length(char *);
int main()
{
    char str[20];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("The length of string is %d",length(str));
    return 0;
}

int length(char *rev_str)
{
    int i;
    for ( i = 0; *(rev_str+i); i++);
    return i-1;
}
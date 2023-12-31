// function to calculate leangth of string 
#include<stdio.h>
int length(char *);
int main()
{
    int l;
    char str[10];
    printf("Enter a string: ");
    fgets(str,10,stdin);
    l = length(str);
    printf("The length of string is %d",l);
    return 0;
}

int length(char *p)
{
    int i;
    for ( i = 0; *(p+i); i++);
    return i;
    
}
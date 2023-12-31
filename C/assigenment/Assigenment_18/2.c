// 2. Write a function to reverse a string.

#include<stdio.h>
#include<string.h>
void rev(char []);
int main()
{
    char p[50];
    printf("Enter the string: ");
    // fscanf(stdin,"%s",p);
    scanf("%s",p);
    rev(p);
    return 0;
}

void rev(char y[])
{
    printf("The reverse string is %s",strrev(y));
}
// 3. Write a program to read and display a 2D array of strings in C language.


#include<stdio.h>
#include<string.h>
int main()
{
    char name[3][10];
    printf("Enter the name: ");
    int i;
    for ( i = 0; i < 3; i++)
    {
        gets(name[i]);
    }

    for ( i = 0; i < 3; i++)
    {
        printf("%s ",name[i]);
    }
    return 0;
    
}
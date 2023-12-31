// 6. Write a program to print the strings which are palindrome in the list of strings.

#include<stdio.h>
#include<string.h>
int main()
{
    char list[5][10];
    char o_list[5][10];
    printf("Enter the list of words: ");
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        gets(list[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        strcpy(o_list[i],list[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        if (strcmp(o_list[i],strrev(list[i]))==0)
        {
            printf("%s is palindrome string\n",list[i]);
        }
        
    }
    return 0;
    
}
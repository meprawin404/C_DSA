// 4. Write a program to search a string in the list of strings.

#include<stdio.h>
#include<string.h>
int main()
{
    char search[20];
    char list[10][20];
    int flag = 0;
    printf("Enter the string you want to search: ");
    gets(search);
    printf("Enter the list of string: ");
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        gets(list[i]);
    }

    for ( i = 0; i < 3; i++)
    {
        if (strcmp(list[i],search)==0)
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("%s found in ",search);
        for ( i = 0; i < 3; i++)
        {
            printf("%s ",list[i]);
        }
    }
    return 0;
    
    
}
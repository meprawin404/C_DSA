// 6. Write a function to check whether a given string is an alphanumeric string or not.

#include<stdio.h>
#include<ctype.h>
int isAlpha(char []);
int main()
{
    char p[50];
    printf("Enter the string: ");
    scanf("%s",p);
    int result;
    result = isAlpha(p);
    if (result == 1)
    {
        printf("The string is alphanumeric");
    }
    else
    {
        printf("The string isn't alphanumeric");
    }
    return 0;
}

int isAlpha(char a[]){
    int i;
    for ( i = 0; a[i]; i++)
    {
        if (isdigit(a[i])==1)
        {
            return 1;
        }
        
    }

}


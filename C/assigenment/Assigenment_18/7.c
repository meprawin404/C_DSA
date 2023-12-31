// 7. Write a function to check whether a given string is palindrome or not.


#include<stdio.h>
#include<string.h>
int palin(char []);
int main()
{
    char p[50];
    printf("Enter the string: ");
    scanf("%s",p);
    int result;
    result = palin(p);
    if (result==1)
    {
        printf("The entred string is palindrome");
    }
    else
    {
        printf("The entred strign isn't palindrome");
    }
    return 0;
}


int palin(char a[]){
    int count=0;
    for ( int i = 0; a[i]; i++)
    {
        count++;
    }
    char o_string[count];
    strcpy(o_string,a[count]);
    strrev(o_string);
    if (strcmp(o_string,a[count])==0)
    {
        return 1;
    }
    return 0;
}
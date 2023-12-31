// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include<stdio.h>
#include<string.h>
void s_swap(char*, char*);

int main()
{
    char string1[20],string2[20];
    printf("Enter 1st string: ");
    gets(string1);
    printf("Enter the second string: ");
    gets(string2);
    s_swap(string1,string2);
    printf("string1 = %s and string2 = %s",string1,string2);
    return 0;
}

void s_swap(char *str1, char *str2)
{
    char temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
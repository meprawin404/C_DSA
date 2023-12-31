// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a letter: ");
    scanf("%c",&c);
    if (c>='A' && c<='Z')
    {
        printf("Uppercase letter");
    }
    else if (c>='a' && c<='z')
    {
        printf("lowercase letter");
    }
    else
    printf("Enter valid input");

    return 0;
}
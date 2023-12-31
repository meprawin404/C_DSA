// 5. Write a function to transform a string into lowercase 

#include<stdio.h>
#include<ctype.h>
void tolwr(char []);
int main()
{
    char p[50];
    printf("Enter the string: ");
    scanf("%s",p);
    tolwr(p);
    return 0;
}

void tolwr(char a[])
{
    for (int i = 0; a[i]; i++)
    {
        printf("%c",tolower(a[i]));
    }
    
}
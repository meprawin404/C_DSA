#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter your name: ");
    scanf("%s",str);
    for (int i = 1; i <= 100 ; i++)
    {
        printf("%s\n",str);
    }
    return 0;
}
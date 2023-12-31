// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

#include<stdio.h>
#include<string.h>
int main()
{
    char p[50];
    int a_count = 0, d_count = 0, s_count = 0;
    printf("Enter the string: ");
    scanf("%s",p);
    strlwr(p);
    for (int i = 0; p[i]; i++)
    {
        if (p[i]>='a' && p[i]<='z')
        {
            a_count++;
        }
        else if (p[i]>'0' && p[i]<'9')
        {
            d_count++;
        }
        else
        {
            s_count++;
        }
        
    }
    printf("The total number of alphabet,digits and special charater is: %d %d %d",a_count,d_count,s_count);
    return 0;
    
}
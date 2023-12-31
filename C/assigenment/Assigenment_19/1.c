// 1. Write a program to find the number of vowels in each of the 5 strings stored in two 
// dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>

int main()
{
    int vowel_count = 0;
    char str[5][20];
    int i,j;
    printf("Enter 5 strings: ");
    for ( i = 0; i < 2 ; i++)
    {
        fgets(str[i],20,stdin);
    }

    char vowel[] = "aeiouAEIOU";

    for ( i = 0; i < 2; i++)
    {
        vowel_count = 0;
        for ( j = 0; str[i][j] != '\0'; j++)
        {
            for (int k = 0; k < strlen(vowel); k++)
            {
                if (str[i][j]==vowel[k])
                {
                    vowel_count++;
                    break;
                }
                
            }
               
        }
        printf("%s has %d vowels\n", str[i], vowel_count);
    }
    return 0;    
    
}
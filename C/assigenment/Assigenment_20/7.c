// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer.

#include<stdio.h>
#include<string.h>
void count(char *,int *);
int main()
{
    int vowel = 0, conson = 0;
    char str[20];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    count(str,&vowel);
    conson = strlen(str) - vowel;
    printf("The number of vowel = %d and consnt = %d ",vowel,conson);
    return 0;
}

void count(char *rev_str, int *rev_v)
{

    char comp[] = {"aeiouAEIOU"};
    int i,j;
    for ( i = 0; rev_str[i] != '\0'; i++)
    {
        for ( j = 0; j < strlen(comp); j++)
        {
            if (rev_str[i]==comp[j])
            {
                (*rev_v)++;
                break;
            }
        }
        
    }
    

}



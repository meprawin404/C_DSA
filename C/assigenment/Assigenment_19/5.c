// 5. Suppose we have a list of email addresses, check whether all email addresses have 
// ‘@’ in it. Print the odd email out.


#include<stdio.h>
#include<string.h>
int main()
{
    char email[5][30];
    int flag = 0;
    printf("Enter 5 mail address: ");
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        gets(email[i]);
    }
    for ( i = 0; i < 3 ; i++)
    {
        flag = 0;
        for ( j = 0; email[i][j] != '\0'; j++)
        {
            if (email[i][j]=='@')
            {
                flag = 1;
                break;
            }
            
        }
        if (flag == 0)
        {
            printf("%s \n",email[i]);
        }
        
    }
    return 0;
    
    
}
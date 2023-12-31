// 9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
// #include<string.h>
int main()
{
    char p[50],temp;
    printf("Enter the string: ");
    scanf("%s",p);
    int i,j;
    for ( i = 0; p[i]; i++)
    {
        for ( j = i+1; p[j]; j++)
        {
            if (p[i]>p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            
        }
        
    }
    printf("The sorted string is %s",p);
    return 0;
    
}
// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from 
// the user.

#include<stdio.h>
#include<string.h>
int main()
{
    char city[10][20],temp[20];
    int i,j;
    printf("Enter the name of ten cities: ");
    for (i = 0; i < 3; i++)
    {
        gets(city[i]);
    }
    
    for (i = 0; i < 3; i++)
    {
        for ( j = i+1; j<3; j++)
        {
            if (strcmp(city[i],city[j])>0)
            {
                strcpy(temp,city[i]);
                strcpy(city[i],city[j]);
                strcpy(city[j],temp);
            }
            
        }
    }

    printf("\n\n");
    for ( i = 0; i < 3; i++)
    {
        printf("%s \n",city[i]);
    }

    return 0;
    
}
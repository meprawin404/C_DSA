// 9. Write a program that asks the user to enter a username. If the username entered is 
// one of the names in the list then the user is allowed to calculate the factorial of a 
// number. Otherwise, an error message is displayed


#include<stdio.h>
#include<string.h>
int pass(char[]);
int main()
{
    char username[20];
    int num,flag;
    printf("Enter the username to proceed: ");
    gets(username);
    flag = pass(username);

    if (flag==1)
    {
        int factorial = 1;
        printf("welcome! you are an authorized user");
        printf("\nEnter the number u want factorail of: ");
        scanf("%d",&num);
        int i;
        for ( i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
        printf("The factorial of %d is %d",num,factorial);
    }
    else
    {
        printf("Sorry! Provided credintal didn't match our database");
    }
    
    return 0;
}


int pass(char username[20])
{
    int flag = 0;
    char list[3][20] = {"prawin_404","yadav_amit","sumit19"};
    int i;
    for ( i = 0; i < 3; i++)
    {
        if (strcmp(list[i],username)==0)
        {
            flag = 1;
            return flag;
        }
        
    }
    return flag;
}
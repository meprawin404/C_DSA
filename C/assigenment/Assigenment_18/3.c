// 3. Write a function to compare two strings.

#include<stdio.h>
#include<string.h>
int comp(char [],char []);
int main()
{
    char p[50],y[50];
    printf("Enter first string: ");
    scanf("%s",p);
    printf("Enter second string: ");
    scanf("%s",y);
    int result;
    result = comp(p,y);
    if (result== -1)
    {
        printf("Both strings aren't equal");
    }
    else
    {
        printf("Both strings are equal");
    }
    
    return 0;
}

int comp(char a[],char b[])
{
    int i;
    for ( i = 0; a[i]; i++)
    {
        if (a[i]!=b[i])
        {
            return -1;
        }
        
    }
    return 1;
}


// #include<stdio.h>
// #include<string.h>
// void comp(char [],char []);
// int main()
// {
//     char p[50],y[50];
//     printf("Enter the first string: ");
//     scanf("%s",p);
//     printf("Enter the second string: ");
//     scanf("%s",y);
//     comp(p,y);
//     return 0;
// }

// void comp(char a[],char b[])
// {
//     int result;
//     result = strcmp(a,b);
//     if (result == 0)
//     {
//         printf("Both the strings are equal");
//     }
//     else
//     {
//         printf("Both the strings aren't equal");
//     }
// }
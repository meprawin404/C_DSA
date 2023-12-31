// 9. Write a program to find the greatest among three given numbers. Print number once 
// if the greatest number appears two or three times.


// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d%d%d",&a,&b,&c);
//     if (a>b && a>c)
//     {
//         printf("%d is the greatest number",a);
//     }
//     else if (b>a && b>c)
//     {
//         printf("%d is the greatest number",b);
//     }
//     else
//     {
//         printf("%d is the greatest number",c);
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d is the greatest number",a);
        }
    }
    else
    {
        if (b>c)
        {
            printf("%d is the greatest number",b);
        }
        else
        {
            printf("%d is the greatest number",c);
        }  
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a , b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
     if (a>b)
    {
        a>c?printf("%d",a):printf("%d",c);
    }
    else
    {
        b>c?printf("%d",b):printf("%d",c);  
    }
    return 0;
    
    
}
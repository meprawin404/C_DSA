// 17. Write a program which takes the length of the sides of a triangle as an input. Display 
// whether the triangle is valid or not

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && a+c>b && c+b>a)
    {
        printf("Triangle is valid");
    }
    else
        printf("Triangle isn't valid");
    
    return 0;
    
}
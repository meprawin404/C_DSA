// write a function to check wether a number is odd or even. return 1
// if even otherwise 0 (TSRS)

#include<stdio.h>
int check(int);
int main()
{
    int num,result;
    printf("Enter a number: ");
    scanf("%d",&num);
    result = check(num);
    if (result==1)
    {
        printf("%d is even",num);
    }
    else
        printf("%d is odd",num);

    return 0;
}

int check(int x)
{
    if (x%2==0)
    {
        return 1;
    }
    else
        return 0;
}
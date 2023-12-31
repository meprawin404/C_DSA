#include<stdio.h>
void natural(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    natural(num);
    return 0;
}

void natural(int x)
{
    if (x>0)
    {
        natural(x-1);
        printf("%d ",x);
    }
    
}
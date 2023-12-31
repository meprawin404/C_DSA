// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.
#include<stdio.h>
int main()
{
    int i,n,num,flag=0;
    int t1=0,t2=1;
    int nextTerm=t1+t2;
    printf("Enter the term: ");
    scanf("%d",&n);
    printf("Enter the number to check: ");
    scanf("%d",&num);
    // printf("The fibonacci series is: %d %d ",t1,t2); 
    for ( i = 3; i <= n; i++)
    {
        // printf("%d ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        if (num==nextTerm)
        {
            printf("%d is present in series",nextTerm);
            flag = 1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("number isn't present in series!");
    }
    
    return 0;
    
}
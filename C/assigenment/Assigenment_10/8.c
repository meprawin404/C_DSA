// 8. Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)

#include<stdio.h>
int fact(int);
int parm(int,int);
int main(){
    int n,r;
    printf("Enter the number of items: ");
    scanf("%d",&n);
    printf("\nEnter the value of r: ");
    scanf("%d",&r);
    int result;
    result = parm(n,r);
    printf("The result is %d",result);
    return 0;

}

int fact(int n)
{
    int fc=1;
    for (int i = 1; i <= n; i++)
    {
        fc = fc * i;
    }
    return fc;
}

int parm(int n, int r){
    int parmutation;
    parmutation = fact(n)/fact(n-r);
    return parmutation;
}

// using formula p = n! / (n-r)!
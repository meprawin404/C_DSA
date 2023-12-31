// #include<stdio.h>
// int swap(int,int);
// int main()
// {
//     int a,b;
//     printf("Enter two values: ");
//     scanf("%d%d",&a,&b);
//     swap(a,b);
//     printf("The value of a is %d and b is %d",a,b);
//     return 0;
// }


// int swap(int x,int y){
//     int temp = x;
//     x = y;
//     y = temp;
    
// }  this method wouldn't work 


#include<stdio.h>
void swap(int *, int *);
int main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("The value of a=%d and b=%d",a,b);
    return 0;
}


void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
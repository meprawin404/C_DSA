// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n, sqr, cube;
//     float sqr_r, cube_r;
//     printf("Enter a positive number: ");
//     scanf("%d",&n);
//     sqr = (n*n);
//     cube = (n*n*n);
//     sqr_r = sqrt(n);
//     cube_r = cbrtf(n);
//     printf("The result is squre = %d, cube = %d, squreroot = %.2f and cuberoot = %2.f",sqr,cube,sqr_r,cube_r);
//     return 0;

// }

#include<stdio.h>
int main()
{
    int a = 2, b = -1, c;
   do
   {
        c = a+b+1;
        printf("%d",c);
        a = b+1;
        b = a+1;
   } while (c<10);
   
    return 0;
}
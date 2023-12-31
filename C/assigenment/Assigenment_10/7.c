// 7. Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)


// #include<stdio.h>
// int main(){
//     int n,r,n_f=1,r_f=1,n_r,n_r_fact=1;
//     float c;
//     printf("Enter the number of items: ");
//     scanf("%d",&n);
//     printf("Enter the number to be selected less then items: ");
//     scanf("%d",&r);
//     for (int i = 1; i <= n; i++)
//     {
//         n_f = n_f*i;
//     }
//     for (int i = 1; i <= r; i++)
//     {
//         r_f = r_f*=i;
//     }
    
//     n_r = n-r;
//     for (int i = 1; i <= n_r ; i++)
//     {
//         n_r_fact = n_r_fact*i;
//     }
    
//     printf("The combnation from %d number of items is %d\n",n,n_f);
//     c =  n_f / (r_f * n_r_fact);
//     printf("The selected number is %.2f",c);
//     return 0;
    
// }


// by using function

#include<stdio.h>
int fact(int);
int combi(int,int);
int main()
{
    int n,r, no_comb, selecte_r;
    printf("Enter the number of itmes: ");
    scanf("%d",&n);
    printf("\nEnter the number to be selected less then itmes: ");
    scanf("%d",&r);
    no_comb = fact(n);
    printf("The number of combination from n item is %d\n",no_comb);
    selecte_r = combi(n,r);
    printf("The selected r is %d",selecte_r);
    return 0;

}

int fact(int number){
    int fc=1;
    for (int i = 1; i <= number; i++)
    {
        fc = fc * i;
    }
    return fc;
}

int combi(int n, int r){
    int c;
    c = fact(n) / (fact(r) * fact(n-r));
    return c;
}


// formula = c = n! / (r! * (n - r)!) to be used
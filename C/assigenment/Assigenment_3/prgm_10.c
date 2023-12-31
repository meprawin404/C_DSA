// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    float sp,cp,result,loss_pec,pro_pec;
    printf("Enter the cost and selling price: ");
    scanf("%f%f",&cp,&sp);
    if (sp>cp)
    {
        result = sp - cp;
        pro_pec = (result/cp)*100;
        printf("The profit is %.2f and profit%% is %.2f",result,pro_pec);
    }
    else
    {
        result = cp - sp;
        loss_pec = (result/cp)*100;
        printf("The loss is %.2f and loss%% is %.2f",result,loss_pec);
    }
    return 0;
    
}
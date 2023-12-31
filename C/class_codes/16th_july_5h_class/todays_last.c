// #include<stdio.h>
// int main()
// {
//     int num,i;
//     for ( i = 1; i <= 3; i++)
//     {
//         printf("Enter an even number: ");
//         scanf("%d",&num);
//         if (num%2==0)
//         {
//             printf("U won");
//             break;
//         }
        
//     }
//     if (i>3)
//     {
//         printf("u loose");
//     }
//     return 0;
    
// }

#include<stdio.h>
int main()
{
    int num,add;
    for ( ; ; )
    {
        printf("Enter a number: ");
        scanf("%d",&num); 
        add = add+num;
        if (num==0)
        {
            break;
        }
        
    }
    printf("The sum of all number is %d",add);
    return 0;
    
}
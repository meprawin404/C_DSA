// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

// #include<stdio.h>
// int main()
// {
//     int s_num,e_num,i,j,flag=0;
//     printf("Enter the starting number: ");
//     scanf("%d",&s_num);
//     printf("Enter the ending number: ");
//     scanf("%d",&e_num);
//     for ( i = s_num; i < e_num; i++)
//     {
//         if (i==1 || i==0)
//         {
//             continue;
//         }
        
//         flag = 1;
//         for ( j = 2; j<i; j++)
//         {
//             if (i%j==0)
//             {
//                 flag = 0;
//                 break;
//             }
            
//         }

//         if (flag==1)
//         {
//             printf("%d ",i);
//         }  
//     }
//     return 0;
// }


#include<stdio.h>
void prime_nums(int,int);
int  main()
{
    int s_num,e_num;
    printf("Enter two number: ");
    scanf("%d%d",&s_num,&e_num);
    prime_nums(s_num,e_num);
    return 0;
}


void prime_nums(int s_num, int e_num){
    int i,j,flag;
    for ( i = s_num; i <= e_num; i++)
    {
        flag = 1;
        if (i==1 || i==0)
        {
            continue;
        }
        for ( j = 2; j<i; j++)
        {
            if (i%j==0)
            {
                flag = 0;
                break;
            }
            
        }
        if (flag==1)
        {
            printf("%d ",i);
        } 
    }
    
}
#include<stdio.h>
struct date
{
    int dd,mm,yy;
};
struct date input();
void showData(struct date);
void sort(struct date temp[], int n);



struct date input()
{
    struct date temp;
    printf("\nEnter Date");
    scanf("%d-%d-%d",&temp.dd,&temp.mm,&temp.yy);
    return temp;
}


void showData(struct date temp)
{
    printf("\n day:%d month:%d year:%d",temp.dd,temp.mm,temp.yy);
}

int main()
{
    struct date dob[4];
    int i = 0;
    for ( i = 0; i < 4; i++)
    {
        dob[i] = input();
    }

    sort(dob,4);

    for ( i = 0; i < 4; i++)
    {
        showData(dob[i]);
    }
    

    return 0;
}



void sort(struct date temp[],int n)
{
    struct date hold;
    int i,j;
    int swap;
    for ( i = 0; i < n; i++)
    {
        swap = 0;
        for ( j = 0; j<n-i-1; j++)
        {
            if (temp[j].yy>temp[j+1].yy)
            {
                swap = 1;
                hold = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = hold;
            }
            
        }

        if (swap == 0)
        {
            break;
        }
        
    }
    
    
}



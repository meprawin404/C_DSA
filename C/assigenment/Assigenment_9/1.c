// 1. Write a program which takes the month number as an input and display
// number of days in that month.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the month to see days: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("There are 31 days in january");
        break;
    case 2:
        printf("There are 28 days in february");
        break;
    case 3:
        printf("There are 31 days in march");
        break;
    case 4:
        printf("There are 30 days in April");
        break;
    case 5:
        printf("There are 31 days in may");
        break;
    case 6:
        printf("There are 30 days in June");
        break;
    case 7:
        printf("There are 31 days in july");
        break;
    case 8:
        printf("There are 31 days in August");
        break;
    case 9:
        printf("There are 30 days in September");
        break;
    case 10:
        printf("There are 31 days in October");
        break;
    case 11:
        printf("There are 30 days in November");
        break;
    case 12:
        printf("There are 31 days in December");
        break;
    default:
        printf("Input valid input");
    }
    return 0;
}
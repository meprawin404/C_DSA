// 4. Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]

#include<stdio.h>
#include<string.h>
// void display_max(struct Employee e[],int);
struct Employee
{
    int id;
    char name[15];
    float salary;
};

struct Employee input()
{
    struct Employee e;
    printf("Enter your id name and salary: ");
    scanf("%d",&e.id);
    getchar();
    scanf("%s",e.name);
    scanf("%f",&e.salary);
    return e;
}

void display_max(struct Employee e[],int size)
{
    struct Employee max = e[0];
    int i;
    for ( i = 0; i < size; i++)
    {
        if (max.salary<e[i].salary)
        {
            max = e[i];
        }
        
    }

    printf("\nThe Employee with highest salary is %d %s %.2f",max.id,max.name,max.salary);
    
    
}

int main()
{
    struct Employee e[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        e[i] = input();
    }
    display_max(e,3);
    return 0;
}
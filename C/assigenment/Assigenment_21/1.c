// 1. Define a structure Employee with member variables id, name, salary

#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[15];
    float salary;
};

struct Employee input()
{
    struct Employee e;
    printf("Enter your id: ");
    scanf("%d",&e.id);
    printf("Enter your name: ");
    getchar();
    gets(e.name);
    printf("Enter your salary: ");
    scanf("%f",&e.salary);
    return e;
}

void display(struct Employee e)
{
    printf("\n%d %s %.2f",e.id,e.name,e.salary);
}

int main()
{
    struct Employee e1,e2;
    e1 = input();
    display(e1);
    return 0;
}
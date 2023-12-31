// 5. Write a function to sort employees according to their salaries [ refer structure from
// question 1]

#include<stdio.h>
#include<string.h>

struct Employee
{
    char name[20];
    int id;
    float salary;
};

struct Employee input()
{
    struct Employee employee;
    printf("Enter the name id and salary of Employees: ");
    scanf("%s",employee.name);
    scanf("%d",&employee.id);
    scanf("%f",&employee.salary);
    return employee;
}

void display_sort(struct Employee employee[],int size)
{
    struct Employee temp;
    int i,j;
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if (employee[i].salary>employee[j].salary)
            {
                temp = employee[i];
                employee[i] = employee[j];
                employee[j] = temp;
            }
            
        }
        
    }

    printf("\n The sorted list is:");
    for ( i = 0; i < size; i++)
    {
        printf("\n %d %s %.2f",i+1,employee[i].name,employee[i].salary);
    }
    
    
}

int main()
{
    struct Employee employee[3];
    int i;
    for ( i = 0; i < 3; i++)
    {
        employee[i] = input();
    }
    display_sort(employee,3);
    return 0;
    
}
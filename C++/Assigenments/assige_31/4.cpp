// 4. Write a C++ program to design a base class Person (name, address,
// phone_no). Derive a class Employee (eno, ename) from Person. Derive a
// class Manager (designation, department name, basic-salary) from
// Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary

#include<iostream>
using namespace std;


class Person
{
    public:
        char pname[50], addree[50];
        int phone;

};

class Employee : public Person
{
    public:
        int e_num;
};

class Manager : public Employee
{
    public:
        char dign[15];
        char department[10];
        float salary;

    
        void Accpt_detail()
        {
            cout<<endl<<"Enter the details of Manager";
            cout<<endl<<"..............................";
            cout<<endl<<"Enter Employee No. : ";
            cin>>e_num;
            cout<<endl<<"Enter Employee Name : ";
            cin>>pname;
            cin.ignore();
            cout<<endl<<"Enter Employee Address : ";
            cin>>addree;
            cout<<endl<<"Enter Phone No. : ";
            cin>>phone;
            cout<<endl<<"Enter Designation : ";
            cin>>dign;
            cin.ignore();
            cout<<endl<<"Enter Basic Salary : ";
            cin>>salary;
        }


};

int main()
{
    int i, m_num, temp;
    cout<<endl<<"Of How many Manager's Details you want to Enter : ";
    cin>>m_num;
    Manager m[m_num];
    for ( i = 0; i < m_num; i++)
    {
        m[i].Accpt_detail();
    }

    temp = 0;

    for ( i = 0; i < m_num; i++)
    {
        if (m[temp].salary<m[i].salary)
        {
            temp = i;
        }
        
    }

    cout<<endl<<"Manager with highest salary is : "<<m[temp].salary;
    cout<<endl<<"N The name of employee is : "<<m[temp].pname;
    return 0;
    
    
}
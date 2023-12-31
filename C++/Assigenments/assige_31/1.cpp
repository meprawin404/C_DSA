// 1. Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.


#include<iostream>
#include<cstring>
using namespace std;

class Person
{
    protected:
        char name[20];
        int age;

    public:
        void setName(char *n){
            strcpy(name,n);
        }

        void setAge(int a){
            age = a;
        }


        char * getName(){
            return name;
        }

        int getAge()
        {
            return age;
        }

};


class  Employee : public Person
{
    private:
        int employee_id;
        int salary;

    public:
        void setId(int e){
            employee_id = e;
        }

        void setSalary(int s)
        {
            salary = s;
        }
    

        int getId()
        {
            return employee_id;
        }

        int getSalary()
        {
            return salary;
        }

        void display(){
            cout<<"name = "<<name<<" age = "<<age<<" employee_id = "<<employee_id<<" salary = "<<salary<<endl;
        }
}; 


int main()
{
    Employee e;
    e.setName("prawin");
    e.setAge(20);
    e.setId(3);
    e.setSalary(34657);
    e.display();
    return 0;

}



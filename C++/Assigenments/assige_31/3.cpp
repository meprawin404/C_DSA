// 3. Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.


#include<iostream>
using namespace std;

class Base
{
    protected:
        float sic;
        float comp;
        float math;

    public:
        void input()
        {
            cout<<endl<<"Enter the marks of science computer and math respcively: ";
            cin>>sic>>comp>>math;
        }
};

class Second : public Base
{
    protected:
        float sum_total()
        {
            return (sic + comp + math);
        } 
};


class Third : public Second
{
    private:
        float result;

    public:
        void perc()
        {
            result = sum_total();
            float final_result;
            final_result = (result/300)*100;
            cout<<"The obtained % is: "<<final_result<<endl;
        }

};

int main()
{
    Third student;
    student.input();
    student.perc();
    return 0;
}
// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.

#include<iostream>
// #include<string.h>
#include<cstring>

using namespace std;

class Student
{
    private:
        char name[50];
        int roll_no;
        char address[50];

    public:
        Student()
        {
            char name = '\0';
            roll_no = 0;
            char address = '\0'; 

        }

        Student(char n[50], int roll, char add[50] ){
            // strcpy(name,n);
            // roll_no = roll;
            // strcpy(address,add);

            // or 

            strncpy(name,n,sizeof(name)-1);
            roll_no = roll;
            strncpy(address,add,sizeof(address)-1);


        }

        void Display()
        {
            cout<<endl<<name<<" "<<roll_no<<" "<<address;
        }
};

int main()
{
    Student s("prawin", 1,"janakpur");
    s.Display();
    return 0;
}
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int ID = 0;

class Student
{
    private:
        int id;
        string name;
        int age;
        string stream;

    public:

        void print()
        {
            cout<<id<<endl;
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<stream<<endl;
            cout<<"##########################################################"<<endl<<endl;
        }
        void addStudent(){
            cout<<"Enter student data"<<endl;
            cout<<"Enter the name"<<endl;
            fflush;
            cin>>name;
            cout<<"Enter the age"<<endl;
            cin>>age;
            cout<<"Enter the stream"<<endl;
            fflush;
            cin>>stream;
            ID++;

            ofstream fout;
            fout.open("student.txt",ios::app);
            fout<<ID<<endl;
            fout<<name<<endl;
            fout<<age<<endl;
            fout<<stream<<endl;
            fout.close();

            fout.open("id_data.txt",ios::app);
            fout<<ID<<endl;
            fout.close();
        }


        void allStudents(){
            ifstream fin;
            fin.open("student.txt");
            while (!fin.eof())
            {
                
            }
            
        }
};


int main()
{
    Student s;
    int choice;
    while (true)
    {
        cout<<"Enter your choice"<<endl;
        cout<<"press 1 to add Student"<<endl;
        cout<<"press 2 to print all Students"<<endl;
        cout<<"press 3 to search student"<<endl;
        cout<<"press 4 to update student record"<<endl;
        cout<<"press 5 to delete student record"<<endl;
        cout<<">> ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            s.addStudent();
            break;
        
        case 2:
            s.allStudents();
            break;


        default:
            return 0;
            break;
        }
    }

    return 0;
    
}
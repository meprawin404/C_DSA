#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        int roll_no;
        char name[15];

        class Address
        {
            private:
                int house_no;
                char street[50];
                char city[15];
                char state[15];

            public:
                void SetAddress(int h_no, char *stet, char *cty, char *sate){
                    house_no = h_no;
                    strcpy(street, stet);
                    strcpy(city,cty);
                    strcpy(state,sate);
                }

                void DisplayAdd(){
                    cout<<"\n"<<house_no<<endl;
                    cout<<street<<endl;
                    cout<<city<<endl;
                    cout<<state<<endl;
                }
            
        };


    Address add;

    public:
        void setRoll(int roll){
            roll_no = roll;
        }

        void setName(char *student_name)
        {
            strcpy(name,student_name);
        }

        void addAddress(int h, char *st, char *ct, char *sta)
        {
            add.SetAddress(h,st,ct,sta);
        }

        void showData(){
            cout<<"Student Data"<<endl;
            cout<<roll_no<<endl;
            cout<<name<<endl;
            add.DisplayAdd();
        }
};

int main()
{
    Student s1;
    s1.setRoll(1);
    s1.setName("prawin");
    s1.addAddress(15,"labhka tol", "hathmunda", "2");
    s1.showData();
    return 0;
}
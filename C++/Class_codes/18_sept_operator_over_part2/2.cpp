#include<iostream>
#include<cstring>
using namespace std;

class MyString
{
    private:
        char *a;
        int size;

    public:

        MyString()
        {
            a =(char *) malloc(1);
            size = 1;
        } 

        MyString(char *str)
        {
            size = strlen(str);
            a = (char *)malloc(size + 1);
            strcpy(a,str);
        }

        MyString(const MyString &s)
        {
            size = strlen(s.a);
            a = (char *)malloc(size + 1);
            strcpy(a,s.a);
        }

        void display()
        {
            cout<<a<<endl;
        }

        void change(char *str)
        {
            free(a);
            size = strlen(str);
            a = (char *) malloc(size + 1);
            strcpy(a, str);
        }


};

int main()
{
    MyString s1("prawin");
    MyString s2 = s1;
    s1.display();

    s1.change("yadav");
    s1.display();
    s2.display();
    return 0;
}
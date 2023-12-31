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

        void display()
        {
            cout<<a<<endl;
        }


};

int main()
{
    MyString s1("prawin");
    s1.display();
    return 0;
}
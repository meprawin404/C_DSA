#include<iostream>
using namespace std;

class Array
{
    private:
        int a[100];
        int const size = 100;

    public:
        Array()
        {

        }


        int setArray(int n, int index)
        {
            a[index] = n;
        }

        void display(int index)
        {
            cout<<a[index];
        }


        int operator[](int index)
        {
            return a[index];
        }
};

int main()
{
    Array a;
    a.setArray(10,11);
    // a.display(12);
    cout<<a[11];
    return 0;
}
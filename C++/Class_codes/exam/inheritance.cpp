#include<iostream>
using namespace std;
class c2;
class c1
{
    private:
        int num;

    public:
        void setData(int x){
            num = x;
        }

        friend void max(c1, c2);
};

class c2
{
    private:
        int num1;

    public:
        void setData(int y){
            num1 = y;
        }

        friend void max(c1, c2);
};

void max(c1 x, c2 y){
    if (x.num > y.num1)
    {
        cout<<x.num;
    }
    else{
        cout<<y.num1;
    }
}

int main()
{
    c1 obj1;
    c2 obj2;
    obj1.setData(5);
    obj2.setData(10);
    max(obj1,obj2);
    return 0;
}
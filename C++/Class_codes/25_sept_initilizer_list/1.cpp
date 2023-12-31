#include<iostream>
using namespace std;

class Ilist
{
    private:
        int x;
        int y;


    public:
        Ilist(int a, int b): x(a), y(b){

        }


        void display(){
            cout<<endl<<"x = "<<x<<", y = "<<y;
        }


};

int main()
{
    Ilist i(5,6);
    i.display();
    return 0;
}
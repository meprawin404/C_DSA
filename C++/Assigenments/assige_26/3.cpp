// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;

class Cube
{
    private:
        int l;

    public:
        Cube()
        {
            l = 0;
        }

        Cube(int x)
        {
            l = x;
        }

        Cube cal()
        {
            Cube result;
            result.l = l*l*l;
            return result;
        }

        void showData()
        {
            cout<<l;
        }

};

int main()
{
    Cube c(5),c2;
    c2 = c.cal();
    c2.showData();
    return 0;
}
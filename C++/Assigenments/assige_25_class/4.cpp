// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.

// #include<iostream>
// using namespace std;

// class Max{

//     private:
//         int x,y,z;
    
//     public:
//         void setData(int a,int b, int c)
//         {
//             x=a;
//             y=b;
//             z=c;
//         }

//         int showData();

// };

// int Max::showData()
// {
//     int max;
//     max = 0;
//     if (max<x)
//     {
//         max=x;
//     }
//     if (max<y)
//     {
//         max = y;
//     }
//     if(max<z)
//     {
//         max=z;
//     }

//     return max; 
// }

// int main()
// {
//     Max m1;
//     m1.setData(10,300,90);
//     cout<<m1.showData();
//     return 0;
// }


#include<iostream>
using namespace std;

class Max{
    private:
        int x,y,z;
    
    public:
        void intput()
        {
            cout<<"Enter three numbers: ";
            cin>>x>>y>>z;
        }
        
        int showData();
};

int Max::showData()
{
    int max;
    max = 0;
    if (max<x)
    {
        max = x;
    }
    
    if (max<y)
    {
        max=y;
    }
    
    if (max<z)
    {
        max = z;
    }
    
    return max;
}


int main()
{
    Max m1;
    m1.intput();
    cout<<m1.showData();
    return 0;
}
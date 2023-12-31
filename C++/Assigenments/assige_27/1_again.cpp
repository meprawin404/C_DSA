// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int real;
//     int img;

// public:
//     void setdata(int r, int i)
//     {
//         real = r;
//         img = i;
//     }

//     void showData()
//     {
//         cout << endl
//              << "real = " << real << " img = " << img;
//     }

//     Complex operator+(Complex c)
//     {
//         Complex temp;
//         temp.real = real + c.real;
//         temp.img = img + c.img;
//         return temp;
//     }

//     Complex operator-(Complex c)
//     {
//         Complex temp;
//         temp.real = real - c.real;
//         temp.img = img - c.img;
//         return temp;
//     }

//     Complex operator*(Complex c)
//     {
//         Complex temp;
//         temp.real = real * c.real;
//         temp.img = img * c.img;
//         return temp;
//     }

//     bool operator==(Complex c)
//     {
//         if (real == c.real && img == c.img)
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int main()
// {
//     Complex c1, c2, c3, c4, c5, c6;
//     c1.setdata(10, 11);
//     c2.setdata(5, 11);
//     c3 = c1 + c2;
//     c4 = c1 - c2;
//     c5 = c1 * c2;
//     bool isequal = c1 == c2;

//     c3.showData();
//     c4.showData();
//     c5.showData();
//     if (isequal)
//     {
//         cout << endl
//              << "Both c1 and c2 are equal";
//     }
//     else
//     {
//         cout << endl
//              << "c1 and c2 aren't equal";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

class complex
{
    private:
        int real;
        int img;

    public:
        complex()
        {
            real = 0;
            img = 0;
        }
        
        complex(int r, int i)
        {
            real = r;
            img = i;
        }

        complex(complex &c)
        {
            real = c.real;
            img = c.img;
        }

        void showData()
        {
            cout<<endl<<"real = "<<real<<" img = "<<img;
        }

        friend complex operator+(complex, complex);
        friend complex operator-(complex, complex);
        friend complex operator*(complex, complex);
        friend bool operator==(complex, complex);
};

complex operator+(complex x, complex y)
{
    complex temp;
    temp.real = x.real + y.real;
    temp.img = x.img + y.img;
    return temp;
}

complex operator-(complex x, complex y)
{
    complex temp;
    temp.real = x.real - y.real;
    temp.img = x.img - y.img;
    return temp;
}

complex operator*(complex x, complex y)
{
    complex temp;
    temp.real = x.real * y.real;
    temp.img = x.img * y.img;
    return temp;
}

bool operator==(complex x, complex y)
{
    if (x.real == y.real && x.img == y.img)
    {
        return true;
    }

    return false;
    
}


int main()
{
    complex c1(10,10), c2(5,5) ,c3,c4,c5,c6;

    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    bool isEqual = (c1 == c2);
    
    c3.showData();
    c4.showData();
    c5.showData();
    if (isEqual)
    {
        cout<<endl<<"Both c1 and c2 are equals";
    }
    else
    {
        cout<<endl<<"c1 and c2 aren't equals";
    }
    
    return 0;
}
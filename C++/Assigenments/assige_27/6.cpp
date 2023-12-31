// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.


#include<iostream>
using namespace std;

class CString{
    private:
        char str[20];

    public:
        void readString()
        {
            cout<<endl<<"Enter the string: ";
            scanf("%s",str);
        }
        
};
// 10. Define a class StaticCount and create a static variable. Increment this variable in 
// a function and call this 3 times and display the result

#include<iostream>
using namespace std;
class StaticCount
{
    private:
        static int count;
    
    public:
        int increse()
        {
            count = count++;
        }

        int get_count()
        {
            return count;
        }
};

int StaticCount::count = 0;

int main()
{
    StaticCount s1,s2,s3;
    s1.increse();
    s2.increse();
    s3.increse();
    cout<<s3.get_count();
    return 0;
}
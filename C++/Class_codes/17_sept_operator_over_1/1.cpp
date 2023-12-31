#include<iostream>
using namespace std;

class Person
{
    private:
        int age;
        int rank;

    public:
        int getAge()
        {
            return age;
        }

        int getRank()
        {
            return rank;
        }

        Person(int a, int r){
            age = a;
            rank = r;
        }

        Person(const Person &p)
        {
            // p.age = 50;
            age = p.age;
            rank = p.rank;
        }

        

};

int main()
{
    Person p1(20,23);
    Person p2=p1;
    cout<<"first person : "<<p1.getAge()<<endl;
    cout<<"second person : "<<p2.getAge()<<endl;
    return 0;
}
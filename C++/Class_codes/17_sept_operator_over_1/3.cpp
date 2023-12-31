#include<iostream>
using namespace std;


class Person
{
    private:
        int age;
        int rank;


    public:
    Person()
    {

    }

    Person(int a, int r)
    {
        age = a;
        rank = r;
    }


    Person(Person &x)
    {
        age = x.age;
        rank = x.rank;
    }

    void display()
    {
        cout<<endl<<"age = "<<age<<" rank = "<<rank;
    }

    Person operator+(Person p)
    {
        Person temp;
        temp.age = age + p.age;
        temp.rank = rank + p.rank;
        return temp;
    }

    Person operator++(){
        Person temp;
        temp.age = ++age;
        temp.rank = ++rank;
        return temp;
    }


    Person operator++(int ){
        Person temp;
        temp.age = age++;
        temp.rank = rank++;
        return temp;
    }

    friend ostream& operator<<(ostream &os, Person p);
};

ostream& operator<<(ostream &os, Person p)
{
    cout<<endl<<"age = "<<p.age<<" rank = "<<p.rank;
    return os;
}

int main()
{
    Person p1(20,23), p2, p3;
    p2 = p1;

    p3 = p1 + p2;

    // p2.display();
    // p3.display();
    // Person p4 = ++p3;
    // (p3++).display();
    // (++p3).display();
    // p4.display();

    cout<<p3<<p2;
    return 0;

}
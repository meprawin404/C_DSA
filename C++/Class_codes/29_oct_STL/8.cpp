#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v;


    for (int i = 0; i < 9; i++)
    {
        v.push_back(i*100);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    // cout<<v[0]<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity();
    return 0;
}
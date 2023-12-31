#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ofstream fout;
    fout.open("abc.txt");
    if (!fout)
    {
        cout<<"Can't open file!";
    }
    else{
        cout<<endl<<"Enter your Data and press -1 to exit"<<endl;

        while(true)
        {
            getline(cin,line);
            if (line == "-1")
            {
                break;
            }
            fout<<line;
            fout<<" ";
            
        }

        cout<<"file created succesfully"<<endl;
        
    }

    fout.close();

    ifstream fin;
    fin.open("abc.txt");

    while (!fin.eof())
    {
        getline(fin,line);
        cout<<line;
    }

    fin.close();

    return 0;
    
    
}
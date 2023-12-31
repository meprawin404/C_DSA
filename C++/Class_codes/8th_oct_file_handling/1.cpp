// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     string line;
//     ofstream fout;
//     fout.open("abc.txt", ios::app);

//     if (!fout)
//     {
//         cout<<"can't create or open the file"<<endl;
//     }
//     else
//     {
//         cout<<"Enter your data"<<endl;
//         while(fout){
//             getline(cin,line);
//             if (line == "-1")
//             {
//                 break;
//             }
//             fout<<line;
            
//         }
//         cout<<"file created/open succesfully"<<endl;
//     }

//     fout.close();

//     return 0;
      
// }




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
        cout<<"can't open file";
    }
    else{

        cout<<endl<<"Enter your data and press -1 to exit";
        while (true)
        {
            getline(cin,line);
            if (line == "-1")
            {
                break;
            }

            fout<<line;    
        }

        cout<<endl<<"File created succefully";
        
    }

    fout.close();
    return 0;
}

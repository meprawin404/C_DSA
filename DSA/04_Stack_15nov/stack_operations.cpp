#include<iostream>
#include<stdlib.h>
using namespace std;

class Stack
{

    /*
    push
    pop
    get tos
    get size
    exit
    */
    private:
        int s[100];
        int tos;

    public:
        Stack()
        {
            tos = -1;
        }

        ~Stack()
        {
            tos = -1;
        }

        int isStackEmpty()
        {
            if (tos == -1)
            {
                return 1;
            }
            else{
                return 0;
            }    
        }

        int isStackFull()
        {
            if (tos == 99)
            {
                return 1;
            }
            else{
                return 0;
            }
        }

        void push(int data)
        {
            if (isStackFull())
            {
                cout<<"Stack overflow"<<endl;
            }
            else
            {
                // tos++;
                // s[tos] = data;
                // or 
                s[++tos] = data;
            }
            
        }

        int pop()
        {
            if (isStackEmpty())
            {
                cout<<"Stack underflow"<<endl;
            }
            else
            {
                // tos--;
                // return s[tos+1];       
                // or 
                return s[tos--];
            }
            
        }

        int Tos()
        {
            if(isStackEmpty())
            {
                cout<<"Stack underflow"<<endl;
                return -1;
            }
            else
            {
                return s[tos];
            }
            
        }

        int Size()
        {
            return (tos+1);
        }
};

int main()
{
    int choice;
    Stack s;
    while (choice != 5)
    {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Top of stack"<<endl;
        cout<<"4. Size of stack"<<endl;
        cout<<"5. exist"<<endl;

        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch (choice)
        {
            case 1:
                {
                    int value;
                    cout<<"Enter the value: ";
                    cin>>value;
                    s.push(value);
                    break;
                }

            case 2:
                {
                    int value;
                    value = s.pop();
                    cout<<"The poped value is "<<value<<endl;
                    break;
                }
            case 3:
                {
                    int Tos;
                    Tos = s.Tos();
                    cout<<"value at the top of stack is "<<Tos<<endl;
                    break;
                }

            case 4:
                {
                    int size;
                    size = s.Size();
                    cout<<"Size of stack is "<<size<<endl;
                    break;
                }
            case 5:
                {
                    exit(0);
                }
        }

    }
    

    return 0;

}
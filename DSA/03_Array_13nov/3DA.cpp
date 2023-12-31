#include<iostream>
using namespace std;

class DynamicArray
{
    private:
        int *array;
        int size;
        int capacity;
    
    public:

        DynamicArray()
        {
            array = new int[1];
            size = 0;
            capacity = 1;
        }

        ~DynamicArray()
        {
            delete []array;
            size = 0;
            capacity = 0;
        }



        int getSize()
        {
            return size;
        }

        int getcapacity()
        {
            return capacity;
        }

        void insert(int index, int value)
        {
            if (size == capacity)
            {
                resize();
            }

            if (index>=capacity || index<0)
            {
                cout<<endl<<"Memory not exist";
                return;
            }
            array[index] = value;
            size++;
        }

        void inserAt(int index,int value)
        {
            for (int i = size-1; i >= index; i--)
            {
                array[i+1] = array[i];
            }
            array[index] = value;
            size++;
        }

        void resize()
        {
                int *temp = new int[capacity*2];
                for (int i = 0; i < size; i++)
                {
                    temp[i] = array[i];
                }
                delete []array;
                array = temp;
                capacity *=2;
            
        }

        int search(int value)
        {
            for (int i = 0; i < size-1; i++)
            {
                if (array[i] == value)
                {
                    return i;
                }
            }
            return -1;
            
        }

        void deleteAt(int index)
        {
            for (int i = index; i < size-1; i++)
            {
                array[i] = array[i+1];
            }
            size--;
            
        }



        void srinkTofit()
        {
            int *temp = new int[size];
            for (int i = 0; i < size; i++)
            {
                temp[i] = array[i];
            }
            delete []array;
            array = temp;

            capacity = size;
            
        }

        void printaLL()
        {
            for (int i = 0; i < size; i++)
            {
                cout<<array[i]<<" ";
            }

            cout<<endl<<"The capacity is "<<capacity<<" and the size is "<<size<<endl;
        }
};

int main()
{
    DynamicArray a;
    a.insert(0,20);
    a.printaLL();

    a.insert(1,30);
    a.printaLL();

    a.insert(2,40);
    a.printaLL();

    a.insert(3,50);
    a.printaLL();

    a.insert(4,60);
    a.printaLL();


    a.inserAt(0,10);
    a.printaLL();

    // int value;
    // cout<<endl<<"Enter the value you want to search: ";
    // cin>>value;
    // int index = a.search(value);
    // if (value != -1)
    // {
    //     cout<<endl<<"The value found at "<<index<<endl;
    // }
    // else{
    //     cout<<endl<<"Value not found";
    // }

    a.deleteAt(0);
    a.printaLL();

    a.srinkTofit();
    a.printaLL();
    

    return 0;
}
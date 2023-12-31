#include<iostream>
using namespace std;

class Array
{
    private:
        int arr[100];
        int size=0;

    public:
        void insert(int index, int value){
            arr[index] = value;
            size++;
        }

        int get(int index){
            return arr[index];
        }

        int getSize(){
            return size;
        }

        void printArray()
        {
            for (int i = 0; i <size; i++)
            {
                cout<<arr[i]<<" ";
            }  
        }

        int search(int value){
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == value)
                {
                    return i;
                }
            }
            return -1;  
        }

        void deleteA(int index){
            for (int i = index; i < size-1; i++)
            {
                arr[i] = arr[i+1];
            }
            arr[size-1] = 0;
            size--;
            
        }

        void insertationAt(int index,int value){
            if (size != 100)
            {
                for (int i = size-1; i == index; i--)
                {
                    arr[i+1] = arr[i];
                }
                arr[index] = value; 
            }
            else
            {
                cout<<endl<<"Array is already full";
            }
            
        }
};

int main()
{
    Array a;
    int n,x;

    //Array size block
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;


    //Array input block
    cout<<"Enter "<<n<<" elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a.insert(i,x);
    }


    //Array  print block
    cout<<endl<<"Elements of array are\n";
    a.printArray();


    //search block
    int value;
    cout<<endl<<"Enter the element you want to search: ";
    cin>>value;
    int index = a.search(value);
    if (index != -1)
    {
        cout<<"The value found at index "<<index<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }


    //Deletation block
    cout<<"Enter the index of element you want to delete"<<endl;
    cin>>index;
    a.deleteA(index);
    a.printArray();


    //insertation at given index
    cout<<endl<<"Enter the index and value at which you want to insert: ";
    cin>>index>>x;
    a.insertationAt(index,x);
    a.printArray();


    return 0;
    

}
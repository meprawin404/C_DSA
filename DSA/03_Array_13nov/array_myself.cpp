#include<iostream>
using namespace std;

class Array
{
    private:
        int arr[100];
        int size = 0;

    public:
        void insert(int index,int value) //Element insert block
        {
            arr[index] = value;
            size++;
        }

        int getSize()   // Size return block
        {
            return size;
        }

        void printall() // print all block
        {
            for (int i = 0; i < size; i++)
            {
                cout<<arr[i]<<" ";
            }
            
        }


        int search(int value)  //search block
        {
            for (int i = 0; i < size-1; i++)
            {
                if(arr[i]==value){
                    return i;
                }
            }
            return -1;
            
        }

        void deleteAt(int index){  //deletation block
            for (int i = index; i < size-1; i++)
            {
                arr[i]= arr[i+1];
                arr[size-1] = 0;
                size--;
            }
        }


        void insertAt(int index,int value)
        {
            if (index<100)
            {
                for (int i = size-1; i == index; i--)
                {
                    arr[i+1]=arr[i];
                }
                arr[index] = value;
                size++;
            }
            else{
                cout<<endl<<"insuficient memory";
            }
        }


};

int main()
{
    Array a;
    int n,x;
    cout<<("Enter the number of elements you want to enter: ");
    cin>>n;
    cout<<"Enter "<<n<<" elements\n";
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a.insert(i,x);
    }

    cout<<endl<<"All the elements of array are\n";
    a.printall();

    int value;
    cout<<endl<<"Enter the element you want to search: ";
    cin>>value;
    int index = a.search(value);
    if (index != -1)
    {
        cout<<endl<<"The value found at index "<<index<<endl;
    }
    else
    {
        cout<<endl<<"Value not found";
    }

    cout<<endl<<"Enter the index of element you want to delete: ";
    cin>>index;
    a.deleteAt(index);
    cout<<endl<<endl<<"Elements after deletation is"<<endl;
    a.printall();

    cout<<endl<<"Enter the element and index you want to enter: ";
    cin>>index>>value;
    a.insertAt(index,value);
    a.printall();
    

    return 0;    
}
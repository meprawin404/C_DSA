#include<iostream>
#include<cstdlib>
using namespace std;

class Node
{
    public:
    int value;
    Node *next;

    Node()
    {
        value = 0;
        next = NULL;
    }
};

class Linkedlist
{
    private:
        Node *head;

    public:
        Linkedlist()
        {
            head = NULL;
        }

        void insert(int v){
            Node *temp = new Node();
            temp->value = v;
            if (head == NULL)
            {
                head = temp;
            }
            else{
                Node *t = head;
                while (t->next != NULL)
                {
                    t = t->next;
                }
                t->next = temp;
            }
            
        }

        void inserAtbegning(int v)
        {
            Node *temp = new Node();
            temp->value = v;
            if (head == NULL)
            {
                head = temp;
            }
            else{
                temp->next = head;
                head = temp;
            }
        }

        void inserAt(int v,int index)
        {
            Node *temp = new Node();
            temp->value = v;
            if (index == 1){
                temp->next = head;
                head = temp;
            }
            else{
                Node *t = new Node();
                t = head;
                while (index > 1)
                {
                    index--;
                    if (t->next != NULL){
                        t = t->next;
                    }
                    else{
                        cout<<"Position doesn't exists"<<endl;
                        return;
                    }

                    
                }
                temp->next = t->next;
                t->next = temp;
            }
            
        }

        void deletationAtMiddle(int n){
            Node *temp = new Node();
            temp = head;
            if (n == 1)
            {
                head = head->next;
                cout<<temp->value<<" deleted"<<endl;
                delete temp;
            }
            else{
                while (n>2)
                {
                    n--;
                    if (temp->next != NULL)
                    {
                        temp = temp->next;
                    }
                    else{
                        cout<<"Position doesn't exists"<<endl;
                        return;
                    }
                }
                Node *t = temp->next;
                temp->next = t->next;
                cout<<t->value<<" deleted"<<endl;
                delete t;

                
            }
            
        }

        void search(int v){
            int count = 0;
            Node *temp = head;
            if (head == NULL)
            {
                cout<<"Linkedlist is empty"<<endl;
            }
            else{
                while (temp != NULL)
                {
                    count++;
                    if (temp->value == v)
                    {
                        cout<<"Element found at index "<<count<<endl;
                        return;
                    }
                    temp = temp->next;
                    
                }
                cout<<"Element not found"<<endl;
                
            }
        }

        void printAll()
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout<<temp->value<<" ";
                temp = temp->next;
            }
            
        }
};

int main()
{
    Linkedlist ll;
    ll.insert(99);
    ll.insert(100);
    ll.insert(23);
    ll.inserAt(12,3);
    // ll.deletationAtMiddle(4);
    // ll.deletationAtMiddle(4);
    ll.printAll();
    ll.search(100);
    return 0;
}




// #include<iostream>
// #include<cstdlib>
// using namespace std;

// class Node
// {
//     public:
//     int value;
//     Node *next;

//     Node()
//     {
//         value = 0;
//         next = NULL;
//     }
// };


// class Linkedlist
// {
//     Node *head;
//     public:
//     Linkedlist()
//     {
//         head = NULL;
//     }

//     void insert(int v){
//         Node *temp = new Node();
//         temp->value = v;
//         if (head == NULL)
//         {
//             head = temp;
//         }
//         else{
//             Node *t = head;
//             while (t->next != NULL)
//             {
//                 t = t->next;
//             }
//             t->next = temp;
//         }
//     }

//     void printAll()
//     {
//         Node *t = head;
//         while (t != NULL)
//         {
//             cout<<t->value<<" ";
//             t = t->next;
//         }
        
//     }
// };

// int main()
// {
//     Linkedlist l1;
//     l1.insert(10);
//     l1.insert(20);
//     l1.insert(30);
//     l1.printAll();
//     return 0;
    
// }
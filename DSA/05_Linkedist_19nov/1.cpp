// #include<iostream>
// #include<cstdlib>
// using namespace std;

// class node
// {
//     public:
//         int value;
//         node *next;

//         node()
//         {
//             value = 0;
//             next = NULL;
//         }
// };

// class Linkedlist
// {
//     private:
//         node *head;

//     public:
//         Linkedlist()
//         {
//             head = NULL;
//         }
//         void insertAtEnd(int v){
//             node *temp = new node();
//             temp->value = v;
//             // temp->next = NULL;
//             if (head == NULL)
//             {
//                 head = temp;
//             }
//             else
//             {
//                 node *t = head;
//                 while (t->next != NULL)
//                 {
//                     t = t->next;
//                 }
//                 t->next = temp; 
//             }   
//         }

//         void inserAtbegning(int v){
//             node *temp = new node();
//             temp->value = v;
//             temp->next = head;
//             head = temp;
//         }

//         void printLL()
//         {
//             node *t = head;
//             while (t != NULL)
//             {
//                 cout<<t->value<<"->";
//                 t = t->next;
//             }
            
//         }
// };

// int main()
// {
//     Linkedlist ll;
//     ll.inserAtbegning(2);
//     ll.insertAtEnd(10);
//     ll.insertAtEnd(20);
//     ll.insertAtEnd(30);
//     ll.printLL();
//     return 0;
// }
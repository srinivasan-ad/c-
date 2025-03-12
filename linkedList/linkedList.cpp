//singly linked list 
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtEnd(node *&head, int val)
// {
//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// void insertAtHead(node* &head , int val)
// {
// node* n = new node(val);
// if(head == NULL)
// {
//     head = n ;
//     return;

// }
// node* temp = head;
// n -> next = temp;
// head = n;
// }
// void display(node *&head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {

//         cout << temp->data << " " << "->" << " ";

//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }
// int main()
// {
//     node *head = NULL;
//     insertAtEnd(head, 0);
//     insertAtEnd(head, 1);
//     insertAtHead(head,3);
//     display(head);
//     cout << "hello";
// }
//doubly linked list
#include <iostream>
using namespace std;
class node
{
public:

    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
      
    }
};

void insertAtEnd(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n -> prev = temp;
}
void insertAtHead(node* &head , int val)
{
node* n = new node(val);
if(head == NULL)
{
    head = n ;
    return;

}
node* temp = head;
n -> next = temp;
temp -> prev = n;
head = n;
}
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " " << "->" << " ";

        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    insertAtEnd(head, 0);
    insertAtEnd(head, 1);
    insertAtHead(head,3);
    display(head);
    cout << "wow";
}

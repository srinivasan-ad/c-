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
int listLen(node* &head)
{
int len = 0;
node* temp = head;
while(temp != NULL)
{
    len++;
    temp = temp -> next;
}    
return len;
}
void insertAtAnyPosition(node* &head , int val , int pos)
{
    int len = listLen(head);
    if(pos > len + 1 || pos < 1)
    {
        cout << "Position entered is invalid :(" << endl;
        return;
    }
    if(pos == 1)
    {
        insertAtHead(head , val);
        return;
    }
    if(pos == len + 1)  
    {
        insertAtEnd(head , val);
        return;
    }

    node* n = new node(val);
    node* temp = head;
    for(int count = 1; count < pos - 1; count++) 
    {
        temp = temp->next;
    }
    
    node* nextNode = temp->next;
    
    temp->next = n;
    n->prev = temp;
    n->next = nextNode;
    
    if (nextNode != NULL)
        nextNode->prev = n;
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
insertAtAnyPosition(head , 1 , 5);
    display(head);
    insertAtAnyPosition(head , 4, 2);
 insertAtAnyPosition(head,3,1);
    display(head);
    cout << "wow";
}

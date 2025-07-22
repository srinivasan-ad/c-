#include<iostream>
using namespace std;
struct Node 
{
   int data;
   Node* next;

  Node(int val)
  {
    data = val;
    next = nullptr;
  }
};
Node* insertNode(Node* head,int val)
{
    Node* newNode = new Node(val);
    if(head == nullptr)
    {
        Node* newNode = new Node(val);
        head = newNode;
        return head;
    }
    Node* cur = head;

    while(cur -> next != nullptr)
    {
        cur = cur -> next;
    }
    cur -> next = newNode;
    return head;

}
Node*insertAtHead(Node* head,int val)
{
 if(head == nullptr)
    {
        Node* newNode = new Node(val);
        head = newNode;
        return head;
    }
 Node* temp = head;
 Node* newNode = new Node(val);
 head = newNode;
 head -> next = temp;
 temp = nullptr;
 delete(temp);
 return head;   
}
Node* insertAtAnyPos(Node* head,int val,int Pos)
{
    if(Pos == 1) 
    {
        head = insertAtHead(head , val);
        return head;
    }
     if(head == nullptr)
    {
        Node* newNode = new Node(val);
        head = newNode;
        return head;
    }
    int count = 0;
    Node* cur = head;
    while(cur -> next != nullptr)
    {
      count++;
      if(count == Pos-1) break;
       cur = cur -> next;
    }
      Node* newNode = new Node(val);
      Node* temp = cur -> next;
      cur -> next = newNode;
      newNode -> next = temp;
      delete(temp);
      return head;
    
 
}
Node* reverse(Node* head)
{
    if (head == nullptr || head->next == nullptr) return head;

    Node* newNode = new Node(0); 
    newNode->next = nullptr;

    Node* cur = head;

    while (cur != nullptr)
    {
        Node* next = cur->next;
        cur->next = newNode->next;
        newNode->next = cur;
        cur = next;
    }

    Node* newHead = newNode->next;
    delete newNode;

    return newHead;
}

void PrintList(Node* head)
{
    Node* cur = head;
    while(cur != nullptr)
    {
        cout << cur->data << " ";
        cur = cur -> next;
    }
    cout << endl;
}
int main()
{
    Node* head = nullptr;
    head =  insertNode(head , 1);
    head = insertNode(head , 2);
    head = insertNode(head , 2);
    head = insertAtHead(head,5);
    head = insertAtAnyPos(head , 6 , 1);
    head = insertAtAnyPos(head , 9 , 6);
    head = reverse(head);
    PrintList(head);
    cout << head -> data <<endl;

}
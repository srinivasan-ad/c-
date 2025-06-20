#include<iostream>
#include<vector>
using namespace std;
class Node
{
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree
{
  public:
     static int index;
    Node* BuildTree(vector<int>&nodes)
    {
       index++;
       if(nodes[index] == -1)
       {
        return nullptr;
       }
       Node* root  = new Node(nodes[index]);
       root -> left = BuildTree(nodes);
       root -> right = BuildTree(nodes);
       cout << root -> data;
       return root;
    }
};
int BinaryTree::index = -1;
int main()
{
    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    BinaryTree* tree = new BinaryTree();
    tree->BuildTree(nodes);

}
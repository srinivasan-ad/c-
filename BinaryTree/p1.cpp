#include<iostream>
#include<vector>
#include<queue>
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
       cout << root -> data ;
       return root;
    }
    //BFS or level order traversal
void BFS(Node* root)
{
   cout << endl;
  if(root == nullptr) return;
  queue<Node*> q;
  q.push(root);
  while(!q.empty())
  {
    int levelSize = q.size();
    while(levelSize--)
    {
    Node* cur = q.front();
    q.pop();
    cout << cur->data << " ";
    if(cur -> left) q.push(cur -> left);
    if(cur -> right) q.push(cur -> right);
  }
  cout << endl;
}
  
}
//Void DFS
//Preorder

void preorder(Node* root)
{
  if(root == nullptr) return ;
  cout << root -> data <<" ";
  preorder(root -> left);
  preorder(root -> right);
}

void inorder(Node* root)
{
  if(!root) return;
  inorder(root -> left);
  cout << root -> data << " ";
  inorder(root -> right);
}

void postorder(Node* root)
{
  if(!root) return ;
  postorder(root -> left);
  postorder(root -> right);
  cout << root -> data << " ";
}
};
int BinaryTree::index = -1;

int main()
{
    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    BinaryTree* tree = new BinaryTree();
    Node* root = tree->BuildTree(nodes);
    tree -> BFS(root);
    cout << endl;
    tree -> preorder(root);
    cout << endl;
    tree -> postorder(root);
    cout << endl;
    tree -> inorder(root);
}
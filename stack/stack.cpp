#include <iostream>
#include <stack>
int main()
{
    std ::cout << "Using stack" << std ::endl;
    std ::stack<int> val;
    // empty() function and size() funnction
    if (val.empty())
    {
        std ::cout << "stack is empty !" << std ::endl;
    }
    else
    {
        std ::cout << " stack is not empty  " << " " << val.size() << std ::endl;
    }
    // push() operation
    val.push(1);
    val.push(2);
    val.push(3);
    val.push(4);
    val.push(5);
    val.push(6);
    std ::cout << " stack is not empty  " << " " << val.size() << std ::endl;
    //pop() operation
    val.pop();
    val.pop();
    std ::cout << " stack is not empty  " << " " << val.size() << std ::endl;
    //top() operation
    int top = val.top();
    std :: cout << "Top of stack is : " << top << std :: endl;
}
#include <iostream>
#include<stack>
using namespace std;
int main(){
    cout << "Using stack" << endl;
    stack<int>Val;
    //empty function
    if(Val.empty())
    {
        cout << "stack is empty !" <<endl;
    }
    else{
        cout << " stack is not empty  " <<endl;
    }
}
#include <iostream>
#include<stack>
int main(){
    std :: cout << "Using stack" << std ::  endl;
    std :: stack<int>Val;
    //empty() function and size() funnction
    if(Val.empty())
    {
        std :: cout << "stack is empty !"  << std ::  endl;
    }
    else{
        std :: cout << " stack is not empty  "  << std :: endl;
    }
}
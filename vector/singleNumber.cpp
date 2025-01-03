#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> Vals = {1,2,1,3,4,2,3,5,6,6,7,7,5};
    sort(Vals.begin() , Vals.end());
    for(int i = 0 ; i < Vals.size() ; )
    {

        if(Vals[i] != Vals[i+1])
        {
            std :: cout<<"Unique num -> " << Vals[i] << " Index -> " << i <<endl ;
            break;
        }
        i += 2;
    
    }
    return 0 ; 
    
}
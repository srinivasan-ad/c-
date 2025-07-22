#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
    unordered_map<int,int> freq;
    vector<int> arr = {1,2,3,2,3,3,4,4,4,4};
    for(auto it : arr)
    {
        freq[it]++;
    }
    for(auto& [i,j] : freq)
    {
        if(j%2 == 0)
        {
          cout << i << " " ;
        }
    }
    cout << endl;
    return 0;
}
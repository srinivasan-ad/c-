#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {1,1,1,2,2,3,3,3,3};
    unordered_map<int,int> mp;
    int sum = 0;
    int maxi = 0;
    for(auto it : arr)
    {
        mp[it]++;
    }
    vector<int> fin(arr.size(),0);
      for(auto& [num,count] : mp)
      {
          
    }
    

}
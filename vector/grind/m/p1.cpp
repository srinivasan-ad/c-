//Two sum
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
//Two pointer greedy method 
vector<int> TwoSum(vector<int>& arr , int k)
{
    int i = 0;
    int j = arr.size()-1;
    while(i <= j)
    {
        if(arr[i] + arr[j] == k) return {arr[i],arr[j]};
        else if(arr[i] + arr[j] > k)
        {
            j--;
        }
        else
        {
             i++;
        }
    }
    return {-1,-1};
} 
vector<int> TwoSum2(vector<int>& arr , int k)
{
    unordered_map<int,bool> mp;
    for(int i = 0; i < arr.size() ; i++)
    {
        if(mp.count(k-arr[i])) return {arr[i] , k-arr[i]};
        if(!mp.count(arr[i])) mp[arr[i]] = true;
    }
    return {-1,-1};
}
void Print(vector<int>& arr)
{
    for(int i = 0  ; i < arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
  vector<int> arr = {3,2,1,8,9,7,6,15};
  sort(arr.begin(),arr.end());
  vector<int> res = TwoSum2(arr,3);
  Print(res);
}
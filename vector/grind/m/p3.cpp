//Majority element Moore's voting algorithm
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
//Better solution using hashmap
int majority(vector<int>& arr)
{
    unordered_map<int,int> mp;
    for(int i = 0 ; i  < arr.size() ; i++)
    {
        mp[arr[i]]++;
    }
    for(auto [ele,count] : mp)
    {
        if(count > arr.size()/2) return ele;
    }
    return -1;
}

//  Moore's voting algoritm
int majority2(vector<int>& arr)
{
   int count = 1;
   int ele = arr[0];
   for(int i = 1 ; i < arr.size() ; i++)
   {
    if(arr[i] == ele)
      count++;
     else
     count--; 
     if(count == 0)
      {
        ele = arr[i];
        count++;
      }
   }
   count = 0;
   for(int i = 0 ; i < arr.size() ; i++)
   {
       if(arr[i] == ele) 
       count++;
   }
   return count > arr.size()/2 ? ele : -1;
}
int main()
{
  vector<int> arr = {1,1,2,3,2,4,2,2,2,2,2};
  int majorityElement = majority2(arr);
  if(majorityElement == -1) cout << "There is no majority element in the array" << endl;
  else cout <<  "The majority element of the array is  -> " << majorityElement << endl;
}
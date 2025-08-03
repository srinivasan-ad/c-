//Leaders in an array -> Leaders are number where the elements in the right of the number is smaller than it 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//key -> iterate from the last by taking max into account
vector<int> Leaders(vector<int>& arr)
{
   int maxi = INT_MIN;
   vector<int> res;
   for(int i = arr.size()-1 ; i >= 0 ; i--)
   {
       if(arr[i] > maxi)
       res.push_back(arr[i]);
       maxi = max(maxi,arr[i]);
   }
   return res;
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
  vector<int> arr = {10,22,12,3,0,6};
  vector<int> res = Leaders(arr);
  reverse(res.begin(),res.end());
  Print(res);
}
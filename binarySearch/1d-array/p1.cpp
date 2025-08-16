// Simple binary search
#include<iostream>
#include<vector>
using namespace std;
//looping
int binarySearch(vector<int>& arr , int k)
{
  int low = 0;
  int high = arr.size()-1;
  int mid = (low+high)/2;
  while(low <= high)
  {
    mid = low+(high-low)/2;
    if(k == arr[mid])
    {
        return mid;
    }
    else if(k > arr[mid])
    {
        low = mid+1;
    }
    else
    {
        high = mid - 1;
    }
  }
  return -1;
}
//recurssion
int BS(vector<int> arr , int k , int low ,int high)
{
    if(low > high) return -1;
    int mid = low + (high - low)/2;
    if(arr[mid] == k) return mid;
    if(k > arr[mid]) return BS(arr,k,mid + 1 , high);
    return BS(arr,k,low,mid-1);
}
int main()
{
   vector<int> arr = {1,2,3,4,5,6,7,8,9};
   int k = 8;
//    int ans = binarySearch(arr,k);
   int ans = BS(arr,k,0,arr.size()-1);

if(ans == -1)
   {
    cout << "Element not present in array :)" << endl;
   }
   else
   {
    cout << "Element found at index -> " << ans << endl;
   }
}
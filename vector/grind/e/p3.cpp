//Day 3
//To check if an array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
//loop
bool sorted(vector<int>& arr)
{
    for(int i = 0 ; i < arr.size() - 1; i++)
    {
          if(arr[i] > arr[i+1])
    {
        return false;
    }
    }
   
    return true;
}
bool sorted(vector<int>& arr,int cur)
{
     if(cur == arr.size()-1) return true;
    if(arr[cur] > arr[cur+1])
    {
        return false;
    }
    return sorted(arr,cur + 1);
}

 int main()
    {
  vector<int> arr = {1,2,3,4,5,6,7,8};
  if(sorted(arr))
  {
    cout << "Array is sorted" << endl;
  }
  else
    cout << "Array is unsorted" << endl;
     if(sorted(arr,0))
  {
    cout << "Array is sorted2" << endl;
  }
  else
    cout << "Array is unsorted2" << endl;

    return 0 ;
}
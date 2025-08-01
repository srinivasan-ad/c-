//Finding second largest
#include<iostream>
#include<vector>
using namespace std;
//Using loop
int Second(vector<int>& arr)
{
    int max1 = arr[0];
    int max2 = INT_MIN;
    for(int i = 0 ; i <= arr.size()-1 ; i++)
    {
        if(max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
            
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    return max2;
}
//Using recurssion
int Second2(vector<int>& arr , int cur , int  max1 , int max2)
{
    if(cur == arr.size()) return max2;
  if(max1 < arr[cur])
        {
            max2 = max1;
            max1 = arr[cur];
            
        }
        else if(arr[cur] > max2 && arr[cur] < max1)
        {
            max2 = arr[cur];
        }   
        return Second2(arr, cur + 1, max1 , max2);
}
int main()
{
 vector<int> arr ={10,20};
 int  max2 = Second2(arr,0 , arr[0] , INT_MIN);
 cout << "Second Largest number is -> " << max2 << endl;
}

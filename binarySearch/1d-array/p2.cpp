// Lower bound an Upper bound
// Lower bound returns the first index where k can be inserted to keep the array sorted 
// Upper bound returns the first index greater than k 
#include<iostream>
#include<vector>
using namespace std;
// Worked by luck
// int lowerBound(vector<int> arr , int k)
// {
//     int low = 0;
//     int high = arr.size()-1;
//     int mid;
//     while(low <= high)
//     {
//         mid = low + (high-low)/2;
//         if(arr[mid-1] < k && arr[mid + 1] > k)
//         {
//             return mid;
//         }
//         else if(k > arr[mid])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid -1;
//         }
//     }
//     if(arr[mid] >= k)
//     {
//         return mid;
//     }
//     return -1;
// }

// Actual lower bound 
 int lowerBound(vector<int> arr , int k)
{
    int low = 0;
    int high = arr.size()-1;
    int mid = arr.size()-1;
     int ans;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(arr[mid] >= k)
        {
           ans = mid;
           high = mid - 1;
        }
        else if(k > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    }
    
    return ans;
}
//upperbound
 int upperBound(vector<int> arr , int k)
{
    int low = 0;
    int high = arr.size()-1;
    int mid = arr.size()-1;
     int ans = arr[arr.size()-1]+1 ;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(arr[mid] > k)
        {
           ans = mid;
           high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }
    
    return ans;
}



int main()
{
  vector<int> arr = {1,2,3,4,5,6,7,9,9,9,9,9,10};
   int k = 7;

   int ans = lowerBound(arr,k);
   int ans2 = upperBound(arr,k);
    cout << "Lower Bound of " << k << " found at index -> " << ans << endl;
     cout << "Upper Bound of " << k << " found at index -> " << ans2 << endl;


}
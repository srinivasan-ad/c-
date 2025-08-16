// Floor and celi
//floor largest number <= k , celi smallest number >= k
#include<iostream>
#include<vector>
using namespace std;
int Floor(vector<int> arr , int k)
{
   int low = 0;
   int high = arr.size()-1;
   int ans = -1;
   while(low <= high)
   {
    int mid = low + (high - low)/2;
    if(arr[mid] <= k)
    {
        ans = mid;
        low = mid + 1;
    }
    else 
    {
        high = mid - 1;
    }
   
   }
   return ans;
}
// celi = lowerbound
int celi(vector<int> arr , int k)
{
    int low = 0;
    int high = arr.size()-1;
    int mid = arr.size()-1;
     int ans = arr.size();
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(arr[mid] >= k)
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
int Ceil(vector<int> arr ,int k)
{

}
int main()
{
   vector<int> arr = {1,2,3,4,5,6,9,9,9,9,9,10};
   int k = 7;

   int ans =  Floor(arr,k);
   int ans2 = celi(arr,k);
    cout << "Floor value of " << k << " found at index -> " << ans << endl;
     cout << "Celi value of " << k << " found at index -> " << ans2 << endl;
}
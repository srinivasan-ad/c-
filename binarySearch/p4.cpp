//Find the first and the last index of number in a sorted array 
#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int> nums , int target)
{
 int low = 0;
        int high = nums.size()-1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] >= target)
            {
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
}
int upperBound(vector<int> nums , int target)
{
        int low = 0;
        int high = nums.size()-1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] > target)
            {
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
}
int main()
{
    vector<int> arr = {1,2,3,4,5,5,5,6,7,8};
    int k = 5;
   int first = lowerBound(arr , k) ;
   int last = upperBound(arr,k);
   if(last - first == 0) cout << "The target is not present in the array " << endl;
   else
   {
       cout << "The first index of target " << k << " is -> " << first << ",the last index is -> " << last-1 <<endl;
       cout << "The total occurences of " << k << " is -> " << last - first;
   }
}
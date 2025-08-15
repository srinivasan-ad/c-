// Lower bound an Upper bound
#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int> arr , int k)
{
    int low = 0;
    int high = arr.size()-1;
    int mid;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(arr[mid-1] < k)
        {
            return mid;
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
    if(arr[mid] == k)
    {
        return mid;
    }
    return -1;
}
int main()
{

}
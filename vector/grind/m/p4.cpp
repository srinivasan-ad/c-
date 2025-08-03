//Kadane's algorithm for maximum subarray
#include<iostream>
#include<vector>
using namespace std;
int Kadane(vector<int>& arr)
{
    int cur = 0;
    int maxi = INT_MIN;
    for(int i = 0 ; i < arr.size() ; i++)
    {
       cur += arr[i];
       maxi = max(maxi,cur);
       if(cur < 0)
       {
        cur = 0;
       }
    }
    return maxi;
}
//to return range 
vector<int> Range(vector<int> & arr)
{
     int cur = 0;
    int maxi = INT_MIN;
    int j = 0;
    int st = 0;
    int temp = 0;
    for(int i = 0 ; i < arr.size() ; i++)
    {
       cur += arr[i];
       if(cur > maxi)
       {
         j = i;
         maxi = cur;
         st = temp;
       }
       if(cur < 0)
       {
        cur = 0;
        temp = i+1;
       }
    }
    return {st,j};
}

int main()
{
   vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
   int maxi = Kadane(arr);
   cout << "The maximum subarray is -> " << maxi << endl;
   vector<int> res = Range(arr);
   int start = res[0];
   int end = res[1];
    cout << "Range of Subarray : " << start << "-> " << end << endl;
    for(int i = start ; i <= end ; i++)
    {
        if(i == end)

        {
            cout << arr[i] << "]" << endl;
        }
        else if(i == start)
        {
            cout << "[" << arr[i] << ",";
        }
        else
        cout << arr[i] << ",";
    }
}
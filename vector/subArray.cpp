#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr = {1,-2,3,4,-5};
    int n = arr.size();
    int maxi = INT_MIN;
    
    // for(int i = 0 ; i  < n ; i++)
    // {
    //     for(int j = i ; j < n ; j++)
    //     {
    //            for(int k = i ; k <= j ; k++)
    //            {
    //             cout << arr[k];
    //            }
    //            cout << " ";

    //     }
    //     cout << endl;
    // }
    // for(int i = 0 ; i < n ; i++)
    // {
    //     int cur = 0;
    //     for(int j = i ; j < n ; j++)
    // {
    //       cur += arr[j];
    //       maxi = max(maxi , cur);
    // }}
    // cout << maxi << endl;

    //Kadane
    int cur = 0;
    int start = 0;
    int end = 0; 
    int tempstart = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cur+= arr[i];
        maxi = max(maxi,cur);
        if(cur < 0)
        {
            cur = 0;
        }
    }
    cout << "Max sum of Subarray is : " << maxi << endl;
    return 0;
}
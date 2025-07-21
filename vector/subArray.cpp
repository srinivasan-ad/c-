#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr = {23,11,-34,22,69,11,-88,-11,12};
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
    int tempstart = 0;
    int start = 0;
    int end = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cur+= arr[i];
        if(cur > maxi)
        {
           maxi = cur;
           start = tempstart;
           end = i;

        }
        if(cur < 0)
        {
            cur = 0;
            tempstart = i + 1;
        }
    }
    cout << "Max sum of Subarray is : " << maxi << endl;
    cout << "Range of Subarray : " << start << "->" << end << endl;
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
    return 0;
}
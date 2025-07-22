#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {2,2,4,2,2};
    vector<int> pre(arr.size());
    int sum = 0;
    bool found = false;
    for(int i = 0; i < arr.size() ;i++)
    {
        sum += arr[i];
        pre[i] = sum;
    }
    for(int i = 0 ; i < arr.size() ; i++)
    {
        int left  = 0;
        int right = 0;
        left = pre[i] - arr[i];
        right = pre[arr.size()-1] - pre[i];
        if(left == right)
        {
            cout <<  "Prefix sum is : " << i << endl;
            found = true;
        }
    }
    if(!found)
    {
        cout << "Not found : " << -1;

    }
    return 0;

}
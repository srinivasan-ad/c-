#include<iostream>
#include<vector>
using namespace std;
int findMax(vector<int>& arr)
{
    int maxi = 0;
    for(int i = 0 ; i < arr.size() - 1 ; i++)
    {
      maxi = max(arr[i] , maxi);
    }
    return maxi;
}
int main()
{
    vector<int> arr = {1,4,3,6,5,2,2,3};
    int maxi = findMax(arr);
    vector<int> count(maxi + 1,0);
    vector<int> ans(arr.size());
    for(int i = 0 ; i < arr.size() ; i++)
    {
        count[arr[i]]++;
    }
    for(int i = 1 ; i <= maxi ; i++)
    {
        count[i] += count[i - 1];
    }
    for(int i = arr.size()-1 ; i >= 0 ; i--)
    {
        ans[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for(int i = 0 ; i < ans.size() ; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;


}
//Buy and sell stocks
#include<iostream>
#include<vector>
using namespace std;
int Profit(vector<int>& arr)
{
    int mini = arr[0];
    int maxi = 0;
    int prof = 0;
    for(int i = 1 ; i < arr.size() ; i++)
    {
         if(arr[i] < mini)
         {
            mini = arr[i];
            maxi = arr[i];
         }
         else if(arr[i] > mini && arr[i] > maxi)
         {
             maxi = arr[i];
             prof = max(prof,maxi - mini);
         }
    }
    return prof;
}
int main()
{
  vector<int> arr = {7,1,5,3,6,4};
  int maxProfit = Profit(arr);
  cout << "The maximum profit that can be earned is -> " << maxProfit << endl;

}
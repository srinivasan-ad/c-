//Find maximum consecutive numbers in an array
#include<iostream>
#include<vector>
using namespace std;
int Find(vector<int>& arr)
{
    int count = 0;
    int maxi = 0;
    for(int it : arr)
    {
        if(it == 1)
        {
            count++;
        }
        else
        {
            maxi = max(maxi,count);
            count = 0;
        }
    }
    return max(maxi,count);
}
int main()
{
  vector<int> arr = {0,1,1,1,1,0,1};
  cout <<  "The maximum continuous occurences of 1's is -> " << Find(arr) << endl;
}
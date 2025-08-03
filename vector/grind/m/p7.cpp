//Next Permutation
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& arr)
{
    int change = -1;
    int mini = INT_MAX;
    int minIndex ;
    for(int i = arr.size()-1 ; i > 0 ; i--)
    {
        if(arr[i] > arr[i-1])
        {
            change = i - 1;
            break;
        }
    }
     if (change == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    for(int i = arr.size() - 1 ; i > change ; i--)
    {

          if(arr[i] > arr[change] && arr[i] < mini) 
          {
            mini = arr[i];
            minIndex = i;
          }
    }
    cout << "This is the value of mini -> " << minIndex << endl;
    cout << "This is the value of change -> " << change << endl;
    swap(arr[change],arr[minIndex]);
    reverse(arr.begin() + change + 1 , arr.end());
}
void Print(vector<int>& arr)
{
    for(int i = 0  ; i < arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
   vector<int> arr = {2,3,1,3,3};
   nextPermutation(arr);
// next_permutation(arr.begin() , arr.end());
   Print(arr);
}
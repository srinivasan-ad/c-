//Left rotate by one
#include<iostream>
#include<vector>
using namespace std;
//left rotate1
void rotate1(vector<int>& arr)
{
    int first = arr[0];
     for(int i = 1; i < arr.size() ; i++)
     {
        arr[i-1] = arr[i];
     }
     arr[arr.size()-1] = first;
}
//left rotate
void rotate2(vector<int>& arr , int k)
{
    k = k%arr.size();
    vector<int> temp(arr.begin(), arr.begin() + k);
    for(int i = k ; i < arr.size() ; i++)
    {
        arr[i - k] = arr[i];
    }
 for(int i = 0; i < k; i++) {
        arr[arr.size() - k + i] = temp[i];
    }
}
//right rotate
 void rotate3(vector<int>& nums, int k) {
        k = k%nums.size();
        vector<int> temp(nums.begin() + (nums.size() - k),nums.end());
        for(int i = nums.size()-k-1 ; i >= 0 ; i--)
        {
             nums[i+k] = nums[i];
        }
        for(int i = 0 ; i < k ; i++)
        {
            nums[i] = temp[i];
        }
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
   vector<int> arr = {1,2,3,4};
    rotate2(arr,3);
    Print(arr);
}
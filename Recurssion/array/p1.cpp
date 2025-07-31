// Reverse an array using recursion
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Using loop
void reverse(vector<int> &arr)
{
    int l = 0;
    int r = arr.size() - 1;
    while (l < r)
    {
        arr[l] = arr[l] ^ arr[r];
        arr[r] = arr[l] ^ arr[r];
        arr[l] = arr[l] ^ arr[r];
        l++;
        r--;
    }
}

// Using recurssion 2 pointer
void reverse(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;
    arr[l] = arr[l] ^ arr[r];
    arr[r] = arr[l] ^ arr[r];
    arr[l] = arr[l] ^ arr[r];
    reverse(arr, l + 1, r - 1);
}
//Using single pointer 
void reverse(vector<int>& arr , int p )
{
    if(p >= arr.size() - 1 - p)
    {
        return;
    }
     swap(arr[p], arr[arr.size()-1-p]);
     reverse(arr,p+1);

}
int main()
{
    vector<int> arr = {1, 2, 3, 4 , 5};

    cout << endl;
    Print(arr);
    reverse(arr);
    Print(arr);
    reverse(arr, 0, arr.size() - 1);
    Print(arr);
    reverse(arr,0);
    Print(arr);
}
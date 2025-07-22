#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     vector<int> arr = {1,2,3,4,5,6,7,8};
     int k = 4;
     sort(arr.begin(), arr.end());
     for(int i = arr.size() - 1 ; i >= arr.size() - k ; i--)
     {
        if(i == arr.size() - k)
        {
            cout << arr[i] << endl;
            break;
        }
        cout << arr[i] << "->";
     }  
 
}
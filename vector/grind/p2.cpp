//Finding second largest
#include<iostream>
#include<vector>
using namespace std;
int Second(vector<int> arr)
{
    int max1 = arr[0];
    int max2 = INT_MIN;
    for(int i = 0 ; i <= arr.size()-1 ; i++)
    {
        if(max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
            
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    return max2;
}
int main()
{
 vector<int> arr ={10,20};
 int  max2 = Second(arr);
 cout << "Second Largest number is -> " << max2 << endl;
}

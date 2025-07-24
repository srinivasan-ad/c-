#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();
    int x = 7;
    bool found = false;
    double step1 =  sqrt(n);
    int step = step1;
    int prev = 0;
    while(prev < n && arr[min(step , n) - 1] < x)
    {
       prev = step;
       step += (int) step1;
    }
    for(int i = prev ; i < min(step,n) ; i++)
    {
        if(arr[i] == x)
        {
            cout << "Element found at Pos : " << i << endl;
            found = true;
            break;
        }
    }
if(!found)
{
    cout << "Element is not found in the array" << endl;
}
return 0;
}
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
int maxi = INT_MIN;
vector<int> arr = {1,2,3,-2,5};
int cur = 0 ;
for(int i = 0 ; i  < arr.size() ; i++)
{
    cur+= arr[i];
    maxi = max(maxi,cur);
    if(cur < 0)
    {
        cur = 0;
    }
}
cout << "Maximum sum of subarray is -> " << maxi << endl;
return 0;
}
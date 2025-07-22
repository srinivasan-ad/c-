#include<iostream>
#include<vector>
#include<unordered_set>
#include<climits>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5,0,10,9};
    int temp = INT_MIN;
    int res = -1;
    unordered_set<int> tempi(arr.begin(),arr.end());
    for(const auto& ele : tempi)
    {
          temp = max(temp,ele);
    }   
    for(const auto& ele : tempi)
    {
        if(ele == temp) continue;
        res = max(res,ele);
    }
    cout << "Second max element is -> " << res << endl;
}
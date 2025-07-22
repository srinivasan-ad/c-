//something is wrong check again not possible in one loop
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int start = 0;
    int end = 0;
    int s = 12;
    vector<int> arr = {1,2,3,7,5};
   vector<int> pre(arr.size());
    int sum = 0;
    for(int i = 0; i < arr.size() ;i++)
    {
        sum += arr[i];
        pre[i] = sum;
    }
    if(pre[pre.size()-1] < s)
    {
        cout << "Not Found" << endl;
        cout <<  pre[pre.size() - 1] << endl;
        return 0;
    }
    while(end < arr.size()-1)
    {
       if(pre[end] - pre[start]  <  s)
       {
        end++;
       }
       else if(pre[end] - pre[start]  > s)
       {
        start++;
       }
       else if(pre[end] - pre[start] == s){
        cout << "Range is : " << start << "->" << end << endl; 
        break;
       }
    }
    return 0;

}
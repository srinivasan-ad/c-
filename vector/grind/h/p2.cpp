//Maximum priority element where ele is > n/3
#include<iostream>
#include<vector>
using namespace std;
vector<int> majority(vector<int>& arr)
{
    vector<int> res;
    int count1 = 0;
    int count2 = 0;
    int ele1 ;
    int ele2 ;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        if(count1 == 0 && ele2 != arr[i])
        {
           ele1 = arr[i];
           count1 = 1;
        }
        else if(count2 == 0 && ele1 != arr[i] )
        {
            ele2 = arr[i];
            count2 = 1;
        }
        else if(arr[i] == ele1) count1++;
        else if(arr[i] == ele2) count2++;
        else{
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for(int i = 0 ; i < arr.size() ; i++)
    {
          if(arr[i] == ele1) count1++;
        else if(arr[i] == ele2) count2++;
    }
    if(count1 > arr.size()/3) res.push_back(ele1);
    if(count2 > arr.size()/3) res.push_back(ele2);
    return res;

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
   vector<int> arr = {3,2};
   vector<int> res = majority(arr);
   Print(res);
}
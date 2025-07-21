#include<iostream>
#include<vector>
using namespace std;
bool nextEvenOrOdd(int val)
{
      if(val%2 == 0)
        {
            return true;
        }
       return false;
}
int main()
{
    vector<int> arr ={1,2,3,6,3,4,4};
    int maxi = 0;
    int count = 0;
    bool isOdd = true ;
    if(arr[0]%2 == 0)
    {
        isOdd == false;
    }
    for(int i = 0 ; i  < arr.size() ; i++)
    {
        if(arr[i]%2 == 0 && isOdd == false)
        {
            count++;
            isOdd = true;
        }
        else if(arr[i]%2 != 0 && isOdd == true)
        {
            count++;
            isOdd = false;
        }
        else{
            maxi = max(maxi,count);
            count = 1;
           isOdd = nextEvenOrOdd(arr[i]);
        }
    }
    cout << maxi << endl; 
}
//Linear
#include<iostream>
#include<vector>
using namespace std;
bool Linear(vector<int>& arr,int n)
{
    int count = 1;
   for(int it : arr)
   {
    if(it == n)
    {
        cout << "Element found at -> " << count << endl;
        return true;
    }
    count++;
   }
   return false;

}
int main()
{
   vector<int> arr = {1,2,3,4,5,6,7,8,9};
   if(Linear(arr,5))
   {
    cout << "Element is present in array" << endl;
   }
   else
   {
    cout << "Elements is not present in the array" << endl;
   }
}
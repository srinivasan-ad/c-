#include<iostream>
#include<vector>
using namespace std;

int largest(vector<int> arr)
{
    int maxi = INT_MIN;
    for(int i = 0 ; i  < arr.size()-1;i++)
    {
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
int main()
{
  vector<int> arr = {65,34431,23,5,76};
 int  maxi = largest(arr);
 cout << "Largest number is -> " << maxi << endl;

}
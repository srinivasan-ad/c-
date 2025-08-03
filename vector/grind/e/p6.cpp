//Move zeroes to end of the array
#include<iostream>
#include<vector>
using namespace std;
void Move(vector<int>& arr)
{
    int i = 0;
    int j = 0;
    for(int j = 0 ; j < arr.size() ; j++)
    {
        if(arr[i] != 0) 
        {
            i++;
          
        }
        else if(arr[i] == 0 && arr[j] != 0)
        {
            swap(arr[i],arr[j]);
            i++;
        }

    }
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
   vector<int> arr = {1};
   Move(arr);
   Print(arr);
  
}
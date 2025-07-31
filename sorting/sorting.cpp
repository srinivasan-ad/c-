//Selection sort
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SelectionSort(vector<int>& arr)
{
    int n = arr.size()-1;
    for(int i = 0 ; i <= n ; i++)
    {
       int mini = i;
       for(int j = i ; j  <= n ; j++)
       {
          if(arr[j] < arr[mini])
          {
            mini = j;
          }
       }
       if(i!=mini) swap(arr[mini],arr[i]);
    }
}
//optimise for best case by breaking if no swaps occur the first time 
void BubbleSort(vector<int>& arr)
{
    int n = arr.size()-1;
    int end = n;
    for(int i = 0 ; i  <= n ; i++)
    {
        bool swapped = false;
        for(int j = 0 ; j < end ; j++)
        {
            if(arr[j] > arr[j+1])
            { 
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
        end = end - 1;
    }
}

void InsertionSort(vector<int>& arr)
{
    int n = arr.size();
    for(int i = 1 ; i < n ; i++)
    {
    
        for(int j = i ; j > 0 ; j-- )
        {
            cout << "it of i -> " << i << endl;
            cout << "it of j ->" << j << endl;
            if(arr[j] < arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else break;
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
   vector<int> arr = {2,3,0,1,4,6,9,7,8};
//    SelectionSort(arr);
BubbleSort(arr);
// InsertionSort(arr);
   Print(arr);
   cout <<  endl;
}
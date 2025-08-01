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
void Print(vector<int>& arr)
{
    for(int i = 0  ; i < arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}
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
//Recursive bubble sort
void Bubble(vector<int>& arr,int cur ,int end)
{
   if (end == 1) return;
   if(cur == end)
   {
    Bubble(arr,0,end-1);
    return;
   }
   if(arr[cur] > arr[cur + 1]) swap(arr[cur],arr[cur+1]);
  Bubble(arr,cur + 1,end);
}

//insertion sort using recurssion 
void Insertion(vector<int>& arr , int cur , int end)
{
    cout << "Main iteration count -> " << cur << endl;
    cout << "End count -> " << end << endl;
    cout << "Array state -> " << " ";
    Print(arr);
    cout << endl;
   if(end == arr.size()) return;
   if(end == 0 || arr[end] > arr[end-1])
   {
    Insertion(arr,cur+1,cur+1);
    return;
   }
   if(arr[end] < arr[end-1]) swap(arr[end],arr[end-1]);
   Insertion(arr,cur,end-1);
}
void InsertionSort(vector<int>& arr)
{
    int n = arr.size();
    for(int i = 1 ; i < n ; i++)
    {
    
        for(int j = i ; j > 0 ; j-- )
        {
            
            if(arr[j] < arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else break;
        }
    }
}
void Merge(vector<int>& arr , int low , int mid , int high)
{
    int l = low ;
    int r = mid + 1;
    vector<int> temp;
    while(l <= mid && r <= high)
    {
        if(arr[l] < arr[r])
        {
            temp.push_back(arr[l]);
            l++;
        } 
        else
        {
            temp.push_back(arr[r]);
            r++;
        } 
    }
    while(l <= mid)
    {
        temp.push_back(arr[l]);
        l++;
    }
    while(r <= high)
    {
        temp.push_back(arr[r]);
        r++;
    }

    for(int i = low ; i <= high  ; i++)
    {
        arr[i] = temp[i - low];
    }
}
void MergeSort(vector<int>& arr , int low , int high)
{
   if(low >= high ) return;
   int mid = (low+high)/2;
   MergeSort(arr , low , mid);
   MergeSort(arr,mid+1,high);
   Merge(arr,low,mid,high);
} 
//Partioton function for quick sort
int Partition(vector<int>& arr, int low , int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while(i < j)
    {
        while(arr[i] <= pivot && i <= high-1)
        {
            i++;
        }

        while(arr[j] >= pivot && j >= low+1)
        {
            j--;
        }
        if(i < j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low] , arr[j]);
    return j;
}
//Quick Sort i and j to iterate the arry swap greater and lesser
void QuickSort(vector<int>& arr , int low , int high  )
{
    if(low < high)
    {
        int pi = Partition(arr,low,high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);

    }
}
int main()
{
   vector<int> arr = {3, 2, 3, 1, 2, 3, 0};
//    SelectionSort(arr);
// BubbleSort(arr);
// InsertionSort(arr);
// MergeSort(arr , 0 , arr.size()-1);
// Bubble(arr,0,arr.size()-1);
// Insertion(arr,1,1);
QuickSort(arr,0,arr.size()-1);
Print(arr);
   cout <<  endl;
}
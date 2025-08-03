//flying dutch flag algorithm to sort an array consisting of 0's,1's,2's
//Always assume an hypothetical array 0000011111|0/1/2|222222 where 0's range is 0 to low-1, 1 is from low to mid-1 ,  unsorted is from mid to high -1 and 2 is from high + 1 to n
#include<iostream>
#include<vector>
using namespace std;
//Btter approach
void count(vector<int>& arr)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        if(arr[i] == 0)
        count0++;
        else if(arr[i] == 1)
        count1++;
        else
        count2++;
    }
    for(int i = 0 ; i < arr.size() ; i++)
    {
        if(count0 > 0)
        {
          arr[i] = 0;
          count0--;
        }
        else if(count1 > 0)
        {
            arr[i] = 1;
            count1--;
        }
        else{
            arr[i] = 2;
            count2--;
        }
    }
}
//Most optimal
//Always assume an hypothetical array 0000011111|0/1/2|222222 where 0's range is 0 to low-1, 1 is from low to mid-1 ,  unsorted is from mid to high and 2 is from high + 1 to n
void dutchFlag(vector<int>& arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        if(arr[mid] == 0)
        {
           swap(arr[mid],arr[low]);
           low++;
           mid++;
        }
        else if(arr[mid] == 1)
        {
           mid++;
        } 
        else
        {
            swap(arr[mid],arr[high]);
            high--;
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
   vector<int> arr = {0,1,2,0,0,0,1,2,2,1,1,2};
   dutchFlag(arr);
   Print(arr);
}
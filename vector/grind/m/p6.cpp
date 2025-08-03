//Arrange elements in alternating ascending and descending order
//Better do this seperate positives and negatives into 2 arrays and the use anothger for loop to create the result array 
#include<iostream>
#include<vector>
using namespace std;
//First try
void Rearrange(vector<int>& arr)
{
   bool isNegative = false;
   int i = 0;
   int j = 0;
   vector<int> res;
   for(int k = 0 ; k  < arr.size() ; k++)
   {
    while (j < arr.size() && arr[j] > 0) j++;
    while (i < arr.size() && arr[i] < 0) i++;
      if(isNegative)
      {
           res.push_back(arr[j]);
           isNegative = !isNegative;
           j++;
      }
      else
      {
           res.push_back(arr[i]);
           isNegative = !isNegative;
           i++;
      }
   } 
   for(int i = 0 ; i < arr.size() ; i++)
   {
    arr[i] = res[i];
   }
}
void Print(vector<int>& arr)
{
    for(int i = 0  ; i < arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}
//Just keep track pf the positive and negative indices
void Rearrange2(vector<int>& arr)
{
   int NegativeIndex = 1;
   int PositiveIndex = 0;
   vector<int> res(0,arr.size());
   for(int i = 0 ; i < arr.size() ; i++)
   {
    if(arr[i] < 0)
    {
        res[NegativeIndex] = arr[i];
        NegativeIndex += 2;
    }
    else
    {
        res[PositiveIndex] = arr[i];
        PositiveIndex += 2;
    }
   }
}
void Rearrange3(vector<int>& arr)
{
   bool isNegative = false;
   int i = 0;
   int j = 0;
   vector<int> res;
   for(int k = 0 ; k  < arr.size() ; k++)
   {
    while (j < arr.size() && arr[j] > 0) j++;
    while (i < arr.size() && arr[i] < 0) i++;
    if(i >= arr.size()) break;
    if(j >= arr.size()) break;
      if(isNegative)
      {
           res.push_back(arr[j]);
           isNegative = !isNegative;
           j++;
      }
      else
      {
           res.push_back(arr[i]);
           isNegative = !isNegative;
           i++;
      }
   } 
   while(j < arr.size()) 
   {
    while (j < arr.size() && arr[j] > 0) j++;
    if(j < arr.size())
    {

        res.push_back(arr[j]);
        j++;
    }
   }
   while(i < arr.size()) 
   {
    while (i < arr.size() && arr[i] < 0) i++;
    if(i < arr.size())
    {
    res.push_back(arr[i]);
    i++;
    }
   }
   for(int i = 0 ; i < arr.size() ; i++)
   {
    arr[i] = res[i];
   }
}
int main()
{
   vector<int> arr = {3,1,-2,-5,2,-4,5,6,7};
   Rearrange3(arr);
   Print(arr);
  
}

//Remove duplicates fom the array
#include<iostream>
#include<vector>
using namespace std;
//first code without using set
void RemoveDuplicates(vector<int>& arr)
{
    int i = 0;
    int j = 0;
    if(arr.size() == 0) return;
    for(int k = 0 ; k  < arr.size() - 1 ; k++)
    {
       if(arr[i] == arr[j])
       {

           j++;
       }
       else
       {
           i++;
           arr[i] = arr[j];
           j++;
       }
    }
    for(int k = arr.size()-1 ; k > i ; k--)
    {
        arr.pop_back();
    }
}

//optimised version 
void RemoveDuplicates2(vector<int>& arr) {
    if (arr.empty()) return;

    int i = 0;
    for (int j = 1; j < arr.size(); ++j) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];  
        }
    }

    arr.resize(i + 1);
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
    vector<int> arr = {1,1,2,3,4};
    RemoveDuplicates2(arr);
    Print(arr);

}
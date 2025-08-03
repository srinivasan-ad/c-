//Find the missing numbver in the array
#include<iostream>
#include<vector>
using namespace std;
//Brute force
int Missing(vector<int>& arr)
{
   for(int i = 0 ; i < arr.size() ; i++ )
   {
    if(arr[i] != i + 1) return i + 1;
   }
   return -1;
}
//Two pointer 
int Missing2(vector<int>& arr)
{
    int i = 0;
    int j = arr.size() - 1;
while(i <= j)
    {
        if(arr[i] != i + 1 )
        {
            return i + 1;
        }
        if(arr[j] != j + 2)
        {
            return j + 2;
        }
        i++;
        j--;
    }
    return j+2;
}
//For unsorted arrays optimal solution
int Missing3(vector<int>& arr)
{
    int n = arr.size() + 1;
    int sum = 0;
    for(int it : arr)
    {
       sum += it;
    }
    int missing_num = ((n*(n+1))/2) - sum;
    return missing_num ;

}
//Using xor gate
int Missing4(vector<int>& arr)
{
 for(int i = 0 ; i < arr.size() ; i++)
 {
    if(arr[i] ^ (i+1) != 0)
    {
        return i+1;
    }   
    return -1;
 }
}
//unsorted 
int Missing5(vector<int>& arr)
{
    int xor1 = 0;
    int xor2 = 0;
 for(int i = 0 ; i < arr.size() ; i++)
 {
    xor1 ^= arr[i];
    xor2 ^= i + 1;
 }
 xor2 ^= arr.size() + 1;
 return xor1 ^ xor2;
}
int main()
{
   vector<int> arr = {1,2,3,4,5,7};
//    int missingNum = Missing(arr);
   int missingNum = Missing5(arr);
   cout << "The missing number in the sequence is  -> " << missingNum << endl;
}
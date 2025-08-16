//find the root and nth root of the given number 
#include<iostream>
#include<vector>
using namespace std;
//looping
int binarySearch(int k )
{
      if (k < 2) return k;
  int low = 2;
  int high = k/2;
  int mid = (low+high)/2;
  while(low <= high)
  {
    mid = low+(high-low)/2;

    if(mid*mid <= k)
    {
        low = mid+1;
    }
    else
    {
        high = mid - 1;
    }
  }
  return high;
}

int helper(int n ,int k, int m)
{
    int res = n;
    for(int i = 2 ; i <= m ; i++)
    {
       res *= n;
       if(res > k) break;
    }
    return res;
}
int nthRoot(int k , int n)
{
    if(k < 2) return k;
    int low = 2;
    int high = k/2;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(helper(mid,k,n) == k)
        {
            return mid;
        }
        else if(helper(mid,k,n) > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    } 
    return -1;
}
int main()
{
   int k = 25;
   int n = 2;
   int ans = binarySearch(k);
   int ans2 = nthRoot(k,n);
    cout << "Integer Square root of " << k << " is -> " << ans << endl;
    cout << "The " << n << " root of " << k << " is -> " << ans2 << endl;
   
}
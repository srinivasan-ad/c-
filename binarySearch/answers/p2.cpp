// koko eating banana
#include<iostream>
#include<vector>
using namespace std;
// My original canEat but too slow
  bool canEat(vector<int> piles , int n , int h)
    {
        int cur = 0;
        int rem = 0;
        int k = 0;
        while(cur <= h && k < piles.size())
        {
            if(rem > 0)
            {
                rem = rem - n;
                cur++;
                if(rem <= 0)
                {
                    k++;
                    rem = 0;
                }
                continue;
            }
           if(piles[k] <= n)
           {
            rem = 0;
            cur++;
            k++;
           }
           else if(piles[k] > n)
           {
              rem = piles[k] - n;
              cur++;
           }
        }
        return cur <= h ? true : false;
    }
       
    // improved canEat
    bool canEat2(vector<int> piles , int n , int h)
    {
        int cur = 0;
        int rem = 0;
        int k = 0;
        while(cur <= h && k < piles.size())
        {
           if(piles[k] <= n)
           {
            rem = 0;
            cur++;
            k++;
           }
           else if(piles[k] > n)
           {
              rem = piles[k]%n;
              if(rem != 0)
              cur += piles[k]/n + 1;
              else
              cur += piles[k]/n; 
              k++;
           }
        }
        return cur <= h ? true : false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = 0;
        for(int i = 0 ; i < piles.size() ; i++)
        {
           maxi = max(maxi,piles[i]);
        }
        // testing canEat
        // if(canEat(piles,22,h))
        // {
        //     return 1;
        // }
        // return -1;
        int low = 1;
        int high = maxi;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(canEat(piles,mid,h))
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }


    int main()
    {

    }
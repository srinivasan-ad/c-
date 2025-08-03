//Longest consecutive sequence in the array 
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int longest(vector<int> nums)
{
    int n =  nums.size();
        if(n==0) return 0;
        int maxi = 1;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int it: st)
        {
            if(st.find(it-1) == st.end())
            {
                int cur = it;
                int len = 1;
                while(st.find(cur + 1) != st.end())
                {
                    len++;
                    cur = cur + 1;
                }
                maxi = max(maxi,len);
            }
        }
        return maxi;
}
int main()
{
  vector<int> arr = {1,0,1,2};
  int maxi = longest(arr);
  cout << "The maximum sequence length is -> " << maxi << endl;
}
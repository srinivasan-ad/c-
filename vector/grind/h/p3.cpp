//3 sum
#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& arr,int k)
{

    set<vector<int>> st;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        unordered_map<int, int> mp; 
        for (int j = i + 1; j < n; j++) {
            int complement = k - (arr[i] + arr[j]);
            if (mp.count(complement)) {
                vector<int> temp = {arr[i], arr[j], complement};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            mp[arr[j]]++; 
        }
    }

    return vector<vector<int>>(st.begin(), st.end());

    
}

void Print(vector<vector<int>>& mat)
{
    for(int i = 0  ; i < mat.size() ; i++)
    {
        for(int j = 0 ; j  <mat[0].size() ; j++)
        {

            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> res = threeSum(nums,0);
  Print(res);
}
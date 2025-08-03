// Find the largest subarray with sum = target
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Optimal for array containing integers
int Largest(vector<int> &arr, int k)
{
    unordered_map<int, int> mp;
    int len = 0;
    int sum = 0;
    int maxi;
    if (arr.size() == 1)
        return arr[0] == k ? 1 : 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxi = max(maxi, i + 1);
        }
        if (mp.find(sum - k) != mp.end())
        {
            len = i - mp[sum - k];
            maxi = max(maxi, len);
        }

        if (!mp.count(sum))
            mp[sum] = i;
        cout << sum << " ";
    }
    return maxi;
}

// 2 pointer approach optimal for positive arrays
int LargestPos(vector<int> &arr, int k)
{
    if (arr.empty())
        return 0;
    int i = 0;
    int j = 0;
    int maxi = 0;
    int sum = 0;
    while (i <= j && j < arr.size())
    {
        sum += arr[j];
        if (sum == k)
        {
            maxi = max(maxi, j - i + 1);
            if (maxi == k)
                return maxi;
        }
        while (sum > k && i <= j)
        {
            sum -= arr[i];
            i++;
        }

        j++;
    }
    return maxi;
}

int main()
{
    vector<int> arr = {1, 2, 1, 1, 1, 1};
    int len = LargestPos(arr, 3);
    cout << endl;
    cout << "Size of the largest subarray whose sum is equal to target is -> " << len << endl;
}
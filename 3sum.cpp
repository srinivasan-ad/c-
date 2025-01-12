#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4}; 
    vector<vector<int>> Res;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue; 
        }
        int target = -nums[i];
        int l = i + 1;
        int r = nums.size() - 1;

        while (l < r) {
            int sum = nums[l] + nums[r];

            if (sum == target) {
                Res.push_back({nums[i], nums[l], nums[r]});
                while (l < r && nums[l] == nums[l + 1]) l++; 
                while (l < r && nums[r] == nums[r - 1]) r--; 
                l++;
                r--;
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
    }

    // Print the result
    for (const auto& triplet : Res) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i != triplet.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}

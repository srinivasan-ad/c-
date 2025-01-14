#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> nums = {1, 1, 0, 0, 1, 1, 0, 1};
    int k = 2;
    int l = 0, r = 0, maxi = 0;

    while (r < nums.size()) {
        if (k >= 0) {
            if (nums[r] == 1) {
                r++;
            } else {
                r++;
                k--;
            }
        } else {
            if (nums[l] == 0) {
                k++;
            }
            l++;
        }

        if (k >= 0) {
            maxi = std::max(maxi, r - l);
        }
    }

    std::cout << maxi << std::endl;
    return 0;
}

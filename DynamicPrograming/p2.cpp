#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int minsteps(vector<int> &cost) {
    int n = cost.size();
    if (n == 1) return cost[0];
    if (n == 2) return min(cost[0], cost[1]);

    vector<int> dp(n);
    dp[0] = cost[0];
    dp[1] = cost[1];

    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i-1], dp[i-2]) + cost[i];
      
    }

    // Minimum cost to reach the top
    return min(dp[n-1], dp[n-2]);
}

int main() {
    vector<int> cost = {10, 15, 20};
    int res = minsteps(cost) ;
    cout << "Minimum Cost to Climb Stairs: " << res << endl;
    return 0;
}

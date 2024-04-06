#include <iostream>
#include <vector>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    if (n < 2) return 0;

    int dp[n + 1];

    dp[0] = dp[1] = 0;

    for (int i = 2; i < n + 1; i++) {
        dp[i] = min(cost[i-1] + dp[i-1], cost[i-2] + dp[i-2]);
    }

    return dp[n];
}

int main() {
    vector<int> cost{ 1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << minCostClimbingStairs(cost) << endl;
}

// Time Complexity = O(n)
// Space Complexity = O(n)

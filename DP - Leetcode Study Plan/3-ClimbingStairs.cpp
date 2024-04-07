#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n <= 1) return 1;

    int dp[n+1];
    dp[0] = dp[1] = 1;

    for(int i = 2; i < n + 1; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main() {
    cout << climbStairs(4) << endl;
}

// Time complexity: O(n)
// Space: O(n)
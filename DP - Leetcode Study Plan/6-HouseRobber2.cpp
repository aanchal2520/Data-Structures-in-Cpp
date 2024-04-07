#include <iostream>
using namespace std;

int maxProfit(vector<int>& nums, int start) {
    int n = nums.size() - 1;
    if(n <= 2) return n == 1 ? nums[start] : max(nums[start], nums[start + 1]);

    int dp[n];
    dp[0] = nums[start];
    dp[1] = nums[start + 1];
    int max_so_far = nums[start];

    for(int i = 2; i < n; i++) {
        dp[i] = nums[start + i] + max_so_far;
        max_so_far = max(max_so_far, dp[i-1]);
    }

    return max(dp[n-1], dp[n-2]);
}

int rob(vector<int>& nums) {
    int n = nums.size();
    if(n <= 2) return n == 1 ? nums[0] : max(nums[0], nums[1]);

    int sol1 = maxProfit(nums, 0);
    int sol2 = maxProfit(nums, 1);

    return max(sol1, sol2);
}

int main() {
    vector<int> nums{1,2,3,1};
    cout << rob(nums) << endl;
}

// Time Complexity = O(N)
// Space Complexity = O(1)
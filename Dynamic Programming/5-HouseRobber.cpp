#include <iostream>
using namespace std;

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n < 2) return nums[0];
    
    int dp[n];
    dp[0] = nums[0];
    dp[1] = nums[1];
    
    int max_so_far = dp[0];

    for (int i = 2; i < n; i++) {
        dp[i] = nums[i] + max_so_far;
        max_so_far = max(max_so_far, dp[i-1]);
    }

    return max(dp[n-1], dp[n-2]);
}

int main() {
    vector<int> nums{2,5,3,1,3,9,7,8,8};
    cout << rob(nums) << endl;
}

// Time Complexity = O(n)
// Space Complexity = O(n)
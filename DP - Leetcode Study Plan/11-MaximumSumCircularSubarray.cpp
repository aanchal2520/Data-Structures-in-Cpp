#include <iostream>
using namespace std;

int maxSubarraySum(vector<int>& nums) {
    int curr_sum = 0;
    int max_sum = INT_MIN;

    for(int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        max_sum = max(max_sum, curr_sum);

        if(curr_sum < 0)
            curr_sum = 0;
    }

    return max_sum;
}

int maxSubarraySumCircular(vector<int>& nums) {
    int sol1 = maxSubarraySum(nums);
    int total_sum = 0;

    for(int i = 0; i < nums.size(); i++) {
        total_sum += nums[i];
        nums[i] *= -1;
    }

    int rev_sol = maxSubarraySum(nums);
    int sol2 = total_sum + rev_sol;

    if(sol2 == 0) return sol1;

    return max(sol1, sol2);
}

int main() {
    vector<int> nums{1,-2,3,-2};
    cout << maxSubarraySumCircular(nums) << endl;
}

// Time Complexity: O(N)
// Space Complexity: O(1)
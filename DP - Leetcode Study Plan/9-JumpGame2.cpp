#include <iostream>
using namespace std;

int jump(vector<int>& nums) {
    int max_reach = 0;
    int last_jump_max_reach = 0;
    int jumps = 0;

    for (int i = 0; i < nums.size() - 1; i++) {
        max_reach = max(max_reach, nums[i] + i);

        if (i == last_jump_max_reach) {
            jumps++;
            last_jump_max_reach = max_reach;
        }
    }

    return jumps;
}

int main() {
    vector<int> nums{2,3,1,1,4};
    cout << jump(nums) << endl;
}

// Time Complexity = O(N)
// Space Complexity = O(1)
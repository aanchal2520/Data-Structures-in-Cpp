#include <iostream>
using namespace std;

bool canJump(vector<int>& nums) {
    int n = nums.size();
    int max_reach = 0;
    
    for (int i = 0; i < n; i++) {
        if (max_reach < i) 
            return false;
            
        max_reach = max(max_reach, nums[i] + i);

        if(max_reach >= n - 1) 
            return true;
    }

    return true;
}

int main() {
    vector<int> nums{3,2,1,0,4};
    cout << canJump(nums) << endl;
}

// Time Complexity = O(N)
// Space Complexity = O(1)
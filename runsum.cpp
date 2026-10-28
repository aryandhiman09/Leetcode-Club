link:https://leetcode.com/problems/running-sum-of-1d-array/description/?utm_source=chatgpt.com

Code:

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i-1];
        }
        return nums;
    }
};

Complexity:
//O(n)
//O(n)

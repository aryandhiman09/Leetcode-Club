Link:https://leetcode.com/problems/minimum-value-of-merged-integers/

Code//
class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int res = 0;

        for(int i = 0; i < nums.size(); i += 2) {
            int a = nums[i];
            int b = nums[i+1];

            int c = b;
            while(c > 0) {
                a = a * 10;
                c = c / 10;
            }

            int merged = a + b;

            if(i==0 || merged < ans) {
                res = merged;
            }
        }

        return res;
    }
};

link:http://leetcode.com/problems/concatenation-of-array/?

code//
  class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int a=nums.size();
        vector<int> ans(2*a);
        
        for(int i=0;i<a;i++){
            ans[i]=nums[i];
            ans[i+a]=nums[i];
        }
        return ans;
    }
};

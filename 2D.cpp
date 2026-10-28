link:https://leetcode.com/problems/richest-customer-wealth/description/?utm_source=chatgpt.com

code:

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for(int i = 0; i < accounts.size(); i++) {
            int sum = 0;

            for(int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }

            if(sum > maxWealth) {
                maxWealth = sum;
            }
        }

        return maxWealth;
    }
};

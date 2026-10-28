link:https://leetcode.com/problems/fizz-buzz/?utm_source=chatgpt.com

Hints:
//useing Vector predefined property ans.push_back
  //or string property to property

Code//
  
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;

        for(int i = 1; i <= n; i++) {
            if(i % 3 == 0 && i % 5 == 0) {
                ans.push_back("FizzBuzz");
            }
            else if(i % 3 == 0) {
                ans.push_back("Fizz");
            }
            else if(i % 5 == 0) {
                ans.push_back("Buzz");
            }
            else {
                ans.push_back(to_string(i));
            }
        }

        return ans;
    }
};

//Time complexity:O(n)
//also same space

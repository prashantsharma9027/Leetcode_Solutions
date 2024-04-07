/*
 * @lc app=leetcode id=678 lang=cpp
 *
 * [678] Valid Parenthesis String
 */

// @lc code=start
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;
        for (char c : s) 
        {
            low += (c == '(') ? 1 : -1;
            high += (c != ')') ? 1 : -1;

            if (high < 0) return false;
            
            low = max(low, 0);
        }
        return low == 0;
    }
};
// @lc code=end


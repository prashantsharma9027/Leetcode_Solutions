/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        int n = columnTitle.size();
        for(int i = 0 ; i < columnTitle.size(); i++)
        {
            char ch = columnTitle[i];
            
            int p = ch - 'A' + 1;
            sum = sum + pow(26,n-i-1)*p;

        }

        return sum;
    }
};
// @lc code=end


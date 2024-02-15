/*
 * @lc app=leetcode id=2108 lang=cpp
 *
 * [2108] Find First Palindromic String in the Array
 */

// @lc code=start
class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        string ans = "

        for(auto i : words)
        {
            string temp = i;
            reverse(temp.begin(), temp.end());

            if(temp == i )
            {
                return i;
            } 
        }

        return "";
        
    }
};
// @lc code=end


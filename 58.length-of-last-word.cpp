/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool counting = false;
        
        for (int i = s.length() - 1; i >= 0; i--) 
        {
            if (s[i] != ' ') 
            {
                counting = true;
                length++;
            }
            else if (counting) 
            {
                break;
            }
        }
        
        return length;

    }
};
// @lc code=end


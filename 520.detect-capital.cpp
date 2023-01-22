#include<bits/stc++>
/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();

        int count = 0;

        for(int i = 0 ; i< n ; i++)
        {
            if(isupper(word[i]))
                count++;    
        }

        if(count == n || count == 0 || count==1 && isupper(word[0]))
        {
            return true;
        }
 13
        return false;
    }
};
// @lc code=end


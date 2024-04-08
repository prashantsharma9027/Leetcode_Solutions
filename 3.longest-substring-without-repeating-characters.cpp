/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0 ;
        int right = 0;

        int ans = 0;

        vector<int>mp(255,-1);
        while(right < n)
        {
            if(mp[s[right]] != -1 )
            {
                left = max(mp[s[right]] + 1 , left );
            }

            mp[s[right]] = right;
            ans = max(right - left + 1 , ans);
            right++;
        }   

        return ans;
    
    }
};
// @lc code=end


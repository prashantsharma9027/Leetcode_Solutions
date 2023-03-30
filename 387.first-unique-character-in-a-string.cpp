/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        
        map<char,int> mp;
				int n = s.size();
        
        
        for(int i = 0 ; i<n ;i++)
        {
            mp[s[i]]++;   
        }
        
        for(int i = 0 ; i<n ; i++)
        {
            if(mp[s[i]]==1)
            return i;
        }
        return -1;
    }
};
// @lc code=end


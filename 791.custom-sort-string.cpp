/*
 * @lc app=leetcode id=791 lang=cpp
 *
 * [791] Custom Sort String
 */

// @lc code=start
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mp;

        
        for (char c : s) 
        {
            mp[c]++;
        }

        string ans = "";

        
        for (char c : order) 
        {
            if (mp.find(c) != mp.end()) 
            {
                ans.append(mp[c], c);
                mp.erase(c);
            }
        }

       
        for (auto& entry : mp) 
        {
            ans.append(entry.second, entry.first);
        }

        return ans;
    }
};

// @lc code=end


/*
 * @lc app=leetcode id=2433 lang=cpp
 *
 * [2433] Find The Original Array of Prefix Xor
 */

// @lc code=start
class Solution {






public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>temp;
  
        temp.push_back(pref[0]);
        for(int i = 1 ; i<pref.size();i++)
        {
            temp.push_back(pref[i-1]^pref[i]);
        }
        return temp;
    }
};
// @lc code=end


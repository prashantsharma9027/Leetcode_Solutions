/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1;
        unordered_set<int>s2;

        vector<int> ans;

        for(int i = 0 ; i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        
        for(int i = 0 ; i<nums2.size();i++)
        {
            s2.insert(nums2[i]);
        }

        for(auto s : s1)
        {
            if (s2.find(s) != s2.end()) {
                ans.push_back(s);
            }
        }
        return ans;
    }
};
// @lc code=end


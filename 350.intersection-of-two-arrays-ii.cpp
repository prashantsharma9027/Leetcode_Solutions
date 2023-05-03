/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int>s1;
        multiset<int>s2;

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
            auto tree_it = s2.find(s);
            if( tree_it != s2.end())
            {
                 ans.push_back(s);
                 s2.erase(tree_it);
            }
        }
        return ans;
    }
};
// @lc code=end


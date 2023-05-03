/*
 * @lc app=leetcode id=2215 lang=cpp
 *
 * [2215] Find the Difference of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        // unordered_set<int> set1(nums1.begin(), nums1.end());
        // unordered_set<int> set2(nums2.begin(), nums2.end());
        set<int> st1;
        set<int> st2;

        for(int i = 0; i<nums1.size();i++)
        {
            st1.insert(nums1[i]);
        }
        for(int i = 0;i<nums2.size();i++)
        {
            st2.insert(nums2[i]);
        }

        vector<int> temp;
        vector<int> temp1;

        for(auto x:st1)
        {
            if(st2.find(x)==st2.end())
            {
                temp.push_back(x);
            }
        }
        for(auto x:st2)
        {
            if(st1.find(x)==st1.end())
            {
                temp1.push_back(x);
            }
        }
        ans.push_back(temp);
        ans.push_back(temp1);
        return ans;
    }
};
// @lc code=end


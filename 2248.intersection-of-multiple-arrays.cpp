/*
 * @lc app=leetcode id=2248 lang=cpp
 *
 * [2248] Intersection of Multiple Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>ans;
        set<int>s;
        
        for(int i:nums[0] )
        {
            s.insert(i);
        }

        for(int i=1; i<nums.size(); i++)
        {
            set<int>st;
            for(auto j : nums[i])
            {
                auto it= s.find(j);
                if(it!=s.end())
                {
                    st.insert(j);
                }
            }
            s=st;
        }

        for(auto x: s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<pair<int,int>> st;
        map<int,int> mp;

        vector<int> ans(nums2.size(),-1);

        for(int i=0; i<nums2.size(); i++)
        {
            mp[nums2[i]]=i;
            while(!st.empty() && st.top().first<nums2[i])
            {
                ans[st.top().second]=nums2[i];
                st.pop();
            }
            st.push({nums2[i],i});
        }
        
        vector<int> a(nums1.size());

        for(int i=0; i<nums1.size(); i++)
        {
            a[i]=ans[mp[nums1[i]]];
        }
        return a;
    }
};
// @lc code=end


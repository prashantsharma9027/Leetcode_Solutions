/*
 * @lc app=leetcode id=2958 lang=cpp
 *
 * [2958] Length of Longest Subarray With at Most K Frequency
 */

// @lc code=start
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int l = 0, r = 0, cnt {};

        
        while(r < n)
        {
            int cur = nums[r++];
            mp[cur]++;
            while(l < r && mp[cur] > k)
            {
                mp[nums[l++]]--;
            }
            cnt = max(cnt, r - l);
        }
        
        return cnt;
    }
};
// @lc code=end


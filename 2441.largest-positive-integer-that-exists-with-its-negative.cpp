/*
 * @lc app=leetcode id=2441 lang=cpp
 *
 * [2441] Largest Positive Integer That Exists With Its Negative
 */

// @lc code=start
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size(), l=0, r=n-1;

        sort(nums.begin(), nums.end());

        while(l<r && nums[l]!=-nums[r])
        {
            if (-nums[l]>nums[r]) l++;
            else r--;

        }
        return (l<r) ?nums[r]:-1;
    }
};
// @lc code=end


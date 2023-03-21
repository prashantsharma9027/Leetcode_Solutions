/*
 * @lc app=leetcode id=2432 lang=cpp
 *
 * [2348] Number of Zero-Filled Subarrays
 */

// @lc code=start
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long cnt = 0, zeroSubarraysindex = 0;
        for (int n : nums) {
            if (n == 0) {
                cnt += ++zeroSubarraysindex;
            } else {
                zeroSubarraysindex = 0;
            }
        }
        return cnt;
    }
};
// @lc code=end


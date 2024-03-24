/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int mod = (int)1e5 + 1;

        for(int i=0;i<nums.size();i++) 
        {
            int ind = abs(nums[i])%mod;
            if(nums[ind]/mod > 0) 
            {
                return ind;
            }
            nums[ind] += mod;
        }
        return -1;
        
    }
};
// @lc code=end


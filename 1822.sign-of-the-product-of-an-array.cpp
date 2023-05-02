/*
 * @lc app=leetcode id=1822 lang=cpp
 *
 * [1822] Sign of the Product of an Array
 */

// @lc code=start
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++) 
        {
            if(nums[i] == 0) return 0;
            if(nums[i] < 0) count++;
        }
        if(count%2 == 0) return 1;
        return -1;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = -1;


        for(int i = 0 ; i<nums.size();i++)
        {
            if(count == 0)
            {
                element = nums[i];
                count  = 1;
            }
            else if(nums[i] == element)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        
        return element;
    }
};
// @lc code=end


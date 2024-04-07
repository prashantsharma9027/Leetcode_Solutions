/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0 ;
        int right = n - 1;

        while (left < right)
        {
            int sum = nums[left] + nums[right];
            if (sum == target)
            {
                return {left, right}; 
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return {-1, -1}; 
    }
};

// @lc code=end


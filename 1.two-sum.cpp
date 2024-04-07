/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numIndexMap;
        for (int i = 0; i < nums.size(); ++i) 
        {
            numIndexMap[nums[i]] = i;
        }
        
        sort(nums.begin(), nums.end());
        
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) 
        {
            int sum = nums[left] + nums[right];
            if (sum == target) 
            {
                return {numIndexMap[nums[left]], numIndexMap[nums[right]]};
            } 
            else if (sum < target) 
            {
                left++;
            } 
            else {
                right--;
            }
        }

        return {-1, -1}; 
    }
};


// @lc code=end


 #include<bits/stdc++>
/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftsum=0;
        int sum = 0;

        for(int i = 0 ;i<n ;i++)
        {
            sum = sum + nums[i];
        }

        for(int i = 0 ; i<n ; i++)
        {
            if (leftsum == sum - leftsum - nums[i]) return i;
            leftsum += nums[i];
        }
        return -1;
    }
};
// @lc code=end


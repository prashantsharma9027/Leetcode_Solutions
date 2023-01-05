#include<bits/stdc++>
/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start


class Solution {
private:
        void solve(vector<int> nums , vector<vector<int>> &ans ,vector<int> output , int index )
        {
            if(index>=nums.size()){
                ans.push_back(output);
                return;}

            solve(nums , ans ,output , index +1 );

            int element = nums[index];
            output.push_back(element);
            solve(nums , ans , output, index+1);
        }
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> output;

        int index = 0;

        solve(nums , ans , output , index);
        return ans;
        
    }
};
// @lc code=end


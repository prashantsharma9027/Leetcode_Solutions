/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        vector<vector<int>> ans ;

        for(int i = 0 ; i< n ; i++)
        {
            if(i > 0 && nums[i] == nums[i -1]) continue;

            for(int j = i+1 ; j<n ;j++)
            {
                if(j != i + 1 && nums[j] == nums[j-1]) continue;
                int l = j+1;
                int r = n-1;

                while(l<r)
                {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[l] + nums[r];

                    if(sum == target)
                    {
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l<r && nums[l] == nums[l-1]) l++;
                        while(l<r && nums[r] == nums[r+1]) r--;
                    }
                    else if(sum < target)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
            }
        }        

        return ans;
    }
};
// @lc code=end


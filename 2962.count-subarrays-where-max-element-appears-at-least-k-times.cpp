/*
 * @lc app=leetcode id=2962 lang=cpp
 *
 * [2962] Count Subarrays Where Max Element Appears at Least K Times
 */

// @lc code=start
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int M=*max_element(nums.begin(), nums.end());
        int n=nums.size(), cnt=0;
        long long ans=0;
        for(int l=0, r=0; r<n; r++){
            cnt+=(nums[r]==M);
            while(cnt>=k){
                cnt-=(nums[l++]==M);
            }
            ans+=l;
        }
        return ans;
    }
};
// @lc code=end


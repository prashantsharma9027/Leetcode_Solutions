/*
 * @lc app=leetcode id=930 lang=cpp
 *
 * [930] Binary Subarrays With Sum
 */

// @lc code=start
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n=nums.size();
        vector<int> freq(goal+n+1, 0); 
        int sum=0, cnt=0;
        for(int x:nums)
        {
            sum+=x;
            if(sum==goal) cnt++;
            if (freq[sum]!=0) 
                cnt+=freq[sum];
            freq[sum+goal]++;
        }
        return cnt;
    }
};

// @lc code=end


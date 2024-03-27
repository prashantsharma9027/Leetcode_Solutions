/*
 * @lc app=leetcode id=713 lang=cpp
 *
 * [713] Subarray Product Less Than K
 */

// @lc code=start
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        int n=v.size();
        int ans=0;
        for(int i=0;i<n;i++) 
        {
            int s=1;
            for(int j=i;j<n;j++) 
            {
                s=s*v[j];
                if(s>=k)
                    break;
                ans++;
            }
        }
        return ans;
    }
};
// @lc code=end


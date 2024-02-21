/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int sum = n*(n+1)/2 ;
       
        // for ( int i =0; i < n-1 ; i ++ ) {
        //     sum = sum - nums[i] ;
        // }
        // return (sum) ;



        int res = 0, i;
        for(i=0; i<nums.size(); i++)
        {
            res = res ^ nums[i] ^ i;
        }
        return res^i;
    }
};
// @lc code=end


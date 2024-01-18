/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        // if(n<0)
        //    return 0;
        // if(n==0)
        //    return 1;

        // return ( climbStairs(n-1)+climbStairs(n-2));
        int n1=0;
        int n2=1;
        int n3=NULL;
        for(int i= 0; i<n;i++)
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        return n3;
    }
};
// @lc code=end


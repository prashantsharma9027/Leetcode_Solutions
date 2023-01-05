/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;

        if(n>=0){
        for(int i =0 ; i<n ; i++)
        {
            ans = ans*x;
        }
        }
        else{
            n = - n ;
            for(int i =0 ; i<n ; i++)
        {
            ans = ans*x;
        }
            ans = 1/ans;
        }

        return ans;
    }
};
// @lc code=end


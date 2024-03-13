/*
 * @lc app=leetcode id=2485 lang=cpp
 *
 * [2485] Find the Pivot Integer
 */

// @lc code=start
class Solution {
public:
    int pivotInteger(int n) {

        int totalSum = n * (n + 1) / 2;
        int leftSum = 0;
        
        for (int i = 1; i <= n; i++) 
        {
            leftSum += i;
            if (leftSum == totalSum - leftSum + i) 
            {
                return i;
            }
        }
        
        return -1;
    }
};
// @lc code=end


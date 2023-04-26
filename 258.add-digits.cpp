/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
                // int sum=0;
        // while(num>9)
        // {
        //     while(num)                          // O(N)
        //     {
        //         sum+=(num%10);
        //         num/=10;
        //     }
        //     num=sum;
        //     sum=0;
        // }
        // return num;

        //          O(1)
        if(num==0)
          return 0;
        else if(num%9==0)
          return 9;
        else
          return num%9;
    }
};
// @lc code=end


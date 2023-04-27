/*
 * @lc app=leetcode id=319 lang=cpp
 *
 * [319] Bulb Switcher
 */

// @lc code=start
class Solution {
public:
    int bulbSwitch(int n) {
        // int ans = sqrt(n);

        // return ans;
        

        int sum=0,cnt=0;
        for(int i=1; i<=n; i+=2)
        {
            sum = sum + i;
            if(n<sum)
            {
                break;
            }
            cnt++;
        }
        return cnt;
    }
};
// @lc code=end


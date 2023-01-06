#include<bits/stdc++>
/*
 * @lc app=leetcode id=1833 lang=cpp
 *
 * [1833] Maximum Ice Cream Bars
 */

// @lc code=start
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        sort(costs.begin(),costs.end());

        double sum = 0;
        int count = 0;

        for(int i = 0 ; i<costs.size();i++)
        {
            sum = sum + costs[i];
            if(sum<=coins && costs[i]<coins)
            {
                count++;
            }
        }
     return count;

    }
};
// @lc code=end


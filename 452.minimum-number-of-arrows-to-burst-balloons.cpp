#include<bits/stdc++>
/*
 * @lc app=leetcode id=452 lang=cpp
 *
 * [452] Minimum Number of Arrows to Burst Balloons
 */

// @lc code=start
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(),points.end());

        int count = 1;

        int endpoint = INT_MAX;

        for(auto p : points)
        {
            int start = p[0];
            int end = p[1];

            if(start>endpoint)
            {
                count++;
                endpoint = end;
                

            }
            else
            {
                endpoint = min(endpoint , end);
            }
        }

        return count;
        
    }
};
// @lc code=end


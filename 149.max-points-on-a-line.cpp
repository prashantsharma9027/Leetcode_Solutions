#include<bits/stdc++>
/*
 * @lc app=leetcode id=149 lang=cpp
 *
 * [149] Max Points on a Line
 */

// @lc code=start
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {

        int ans = 1;

        for(int i = 0 ; i< points.size()-1 ; i++)
        {
            unordered_map<double , int > mp;
            for(int j = i+1 ; j<points.size() ; j++)
            {
                int x1 = points[i][0];
                int x2 = points[j][0];
                int y1 = points[i][1];
                int y2 = points[j][1];

                if(x1==x2)
                {
                    mp[1000002]++;
                }

                else
                {
                    double slope = (double)(y2-y1)/(double)(x2-x1);
                    mp[slope]++;
                }
            }

            int temp = 0;

            for(auto i : mp)
            {
                temp = max(temp, i.second);
            }

            ans = max(ans , temp+1);
        }

        return ans;
        
    }
};
// @lc code=end


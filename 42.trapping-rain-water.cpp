#include<bits/stdc++>
/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {

        int sum = 0;

        int n = height.size();

        int left[n];
        int right[n];   

        left[0] = height[0];
        right[n-1] = height[n-1];

        for(int i = 1 ; i<n ; i++)
        {
            left[i] = max(left[i-1] , height[i]);
        }

        for(int i = n-2 ; i>=0 ; i--)
        {
            right[i] = max(right[i++1],height[i]);
        }

        for(int i = 0 ; i<n ;i++)
        {
            sum+= min(left[i], right[i]) - height[i];
        }

        return sum;
        
    }
};
// @lc code=end


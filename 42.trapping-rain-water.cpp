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
        vector<int> l(n,0),r(n,0);

        // int left[n];
        // int right[n];   

        // left[0] = height[0];
        // right[n-1] = height[n-1];

        // for(int i = 1 ; i<n ; i++)
        // {
        //     left[i] = max(left[i-1] , height[i]);
        // }

        // for(int i = n-2 ; i>=0 ; i--)
        // {
        //     right[i] = max(right[i+1] , height[i]);
        // }


        stack<int> s;
        for(int i = 0; i < n; i++){
            while(!s.empty() && s.top()<=height[i]){
                s.pop();
            }
            if(!s.empty()){
                l[i] = s.top();
            }
            if(s.empty() || height[i]>s.top())
            s.push(height[i]);
            
        }

        while(!s.empty())s.pop();

        for(int i = n-1; i >= 0; i--){
            while(!s.empty() && s.top()<=height[i]){
                s.pop();
            }
            if(!s.empty()){
                r[i] = s.top();
            }
            if(s.empty() || height[i]>s.top())
            s.push(height[i]);
        }


        for(int i = 0 ; i<n ;i++)
        {
            if(min(l[i],r[i])-height[i]>0)
            sum += (min(l[i],r[i])-height[i]);
        }

        return sum;
        
    }
};

// @lc code=end


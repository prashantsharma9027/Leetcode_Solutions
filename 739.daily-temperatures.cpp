/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans(n, 0); 
        stack<int>s;
        
        for(int i = n-1; i>=0; --i)
        {
            while(!s.empty() && temperatures[s.top()] <= temperatures[i])
            {
                s.pop();
            }
	
            if(!s.empty())
            {
                ans[i] = s.top()-i;
            }

            s.push(i);
        }
        
        return ans;
    }
};
// @lc code=end


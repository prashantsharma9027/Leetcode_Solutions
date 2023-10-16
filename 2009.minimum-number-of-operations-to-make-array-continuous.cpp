/*
 * @lc app=leetcode id=2009 lang=cpp
 *
 * [2009] Minimum Number of Operations to Make Array Continuous
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        
        set<int> st(begin(nums), end(nums));
        
        vector<int> temp(begin(st), end(st));
        
        i
        nt result = INT_MAX;
        
        
        
        for(int i = 0; i<temp.size(); i++) {
            
            int left_range  = temp[i];
            int right_range = left_range + n - 1;
            
            int j = upper_bound(begin(temp), end(temp), right_range) - begin(temp);
            
            int in_range  = j - i;
            int out_range = n - in_range;
            
            result = min(result, out_range);
            
        }
        
        return result;
        
    }
};


// @lc code=end


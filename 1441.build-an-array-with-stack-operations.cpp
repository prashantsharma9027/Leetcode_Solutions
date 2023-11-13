/*
 * @lc app=leetcode id=1441 lang=cpp
 *
 * [1441] Build an Array With Stack Operations
 */

// @lc code=start
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> operations;
        
        int targetIndex = 0;
        
        for (int i = 1; i <= n; i++) 
        {
            if (targetIndex == target.size()) 
            {
                break;  
            }
            
            if (target[targetIndex] == i) 
            {
                operations.push_back("Push");
                targetIndex++;
                
                
                
            } 
            else 
            
            {
                operations.push_back("Push");
                operations.push_back("Pop");
            }
            
        }
        
        
        return operations;
    }
};
// @lc code=end


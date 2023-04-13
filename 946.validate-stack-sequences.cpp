/*
 * @lc app=leetcode id=946 lang=cpp
 *
 * [946] Validate Stack Sequences
 */

// @lc code=start
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st; 
        
        int j = 0;
        
        for(auto val : pushed)
        {
            st.push(val); 
            while(st.size() > 0 && st.top() == popped[j])
            { 
                st.pop(); 
                j++; 
            }
        }
        
        return st.size() == 0;
    }
};
// @lc code=end


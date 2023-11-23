/*
 * @lc app=leetcode id=2390 lang=cpp
 *
 * [2390] Removing Stars From a String
 */

// @lc code=start

class Solution { 
public:
    string removeStars(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '*' && !st.empty()) {
                st.pop();
            } else {
                st.push(c);
            }
        }

        

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};
// @lc code=end


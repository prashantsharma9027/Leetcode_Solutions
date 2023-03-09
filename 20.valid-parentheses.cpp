/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i = 0 ; i< s.size(); i++)
        {
            char temp = s[i];

            if(temp == '(' || temp == '{' || temp == '['){
                st.push(temp);
            }
            else
            {
                if(!st.empty())
                {
                    if(temp == '}' && st.top() == '{' || 
                        temp == ')' && st.top() == '('||
                        temp == ']' && st.top() == '['){
                            st.pop();
                        }
                        else{
                            return false;
                        }
                }
                else{
                    return false;
                }
            }
        }

        if(st.empty())
        {
            return true;
        }
        else{
            return false;
        }        
    }
};
// @lc code=end


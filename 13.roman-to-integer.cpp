/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {

        stack<char> st;
        for(int i = 0 ; i< s.size(); i++ )
        {
            st.push(s[i]);
        }        

        map<char , int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int n = mp[st.top()];
        st.pop();
        int ans = n;

        while(!st.empty())
        {
            int temp = mp[st.top()];
            st.pop();

            if(temp<n) 
            {
                ans = ans - temp; 
            }
            else
            {
                ans  = ans + temp;
                n = temp;
            }
        }

        return ans;

        
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=1704 lang=cpp
 *
 * [1704] Determine if String Halves Are Alike
 */

// @lc code=start
class Solution {
public:
    bool halvesAreAlike(string s) {

        unordered_set<char> st;

        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');



        int vowelsCount = 0;
        int midIndex = s.length() / 2;

        for (int i = 0; i < midIndex; i++) 
        {
            char charA = s[i];
            char charB = s[midIndex + i];
            if (st.count(charA)) vowelsCount++;
            if (st.count(charB)) vowelsCount--;
        }

        return vowelsCount == 0;
    }
};
// @lc code=end


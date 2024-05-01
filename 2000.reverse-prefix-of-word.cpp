/*
 * @lc app=leetcode id=2000 lang=cpp
 *
 * [2000] Reverse Prefix of Word
 */

// @lc code=start
class Solution {
public:
    string reversePrefix(string& word, char ch) {
        int r=word.find(ch);
        if (ch==-1) return word;
        int r0=(r-1)/2;
        for(int i=0; i<=r0; i++)
            swap(word[i], word[r-i]);
        return word;
    }
};
// @lc code=end


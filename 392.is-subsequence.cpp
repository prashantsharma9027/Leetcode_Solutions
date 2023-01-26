#include<bits/stdc++.h>
/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class2421 Solution {
public:
    bool isSubsequence(string s, string t) {

        int idx=0;
        for(int i=0 ; i<t.size() ; i++){
            if(t[i] == s[idx]) idx++;
        }
        if(idx == s.size()) return true; 
        else return false;
    }
};
// @lc code=end


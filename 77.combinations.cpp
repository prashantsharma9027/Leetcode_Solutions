/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
private:
    vector<vector<int>>res;
    void solve(int num,int tot,int k,vector<int>&ans){
        if(num==tot+1)
        {
            if(ans.size()==k)
            res.push_back(ans);
            return;
        }

        ans.push_back(num);
        solve(num+1,tot,k,ans);
        ans.pop_back();
        solve(num+1,tot,k,ans);
    }

public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>ans;
        solve(1,n,k,ans);
        return res;
    }
};
// @lc code=end


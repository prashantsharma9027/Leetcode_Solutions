/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
    private:
    void solve(int index , int target ,vector<int> &A, vector<vector<int>> &ans , vector<int>&ds)
    {
        if(target == 0){
            ans.push_back(ds);
            return;
            }
           
        

        for(int i = index ; i<A.size();i++)
        {
            if(i>index && A[i] == A[i-1]) continue;
            if(A[i]>target) break;
            
            ds.push_back(A[i]);
            solve(i+1,target-A[i],A,ans,ds);
            ds.pop_back();

        }
        return;
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<int>ds;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());

        solve(0,target,candidates,ans,ds);
        return ans;
        
    }
};
// @lc code=end


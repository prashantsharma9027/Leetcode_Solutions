/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
    private:
    void solve(int index , int target ,vector<int> &A, vector<vector<int>> &ans , vector<int>&ds)
    {
        if(index == A.size())
        {
            if(target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        
        if(A[index]<=target)
        {
            ds.push_back(A[index]);
            solve(index,target-A[index],A,ans,ds);
            ds.pop_back();
        }
        
        solve(index+1 , target , A , ans , ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int>ds;
        vector<vector<int>>ans;

        solve(0,target,candidates,ans,ds);
        return ans;
        
    }
};
// @lc code=end


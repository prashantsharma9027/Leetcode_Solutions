/*
 * @lc app=leetcode id=988 lang=cpp
 *
 * [988] Smallest String Starting From Leaf
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, string & ans, string ds) {
        if (root == nullptr) {
            return;
        }

        ds.push_back('a' + root->val); 
        if (root->left == nullptr && root->right == nullptr) 
        {
            reverse(ds.begin(), ds.end());
            if (ans.empty() || ds < ans) 
            {
                ans = ds;
            }
            reverse(ds.begin(), ds.end()); 
        }
        solve(root->left, ans, ds);
        solve(root->right, ans, ds);
    
    }
    string smallestFromLeaf(TreeNode* root) {

        string ans;


        string ds = "";
        
        solve(root , ans , ds);

        return ans;
        
    }
};
// @lc code=end


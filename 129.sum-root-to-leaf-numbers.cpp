/*
 * @lc app=leetcode id=129 lang=cpp
 *
 * [129] Sum Root to Leaf Numbers
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
    bool isLeaf(TreeNode* root)
    {
        if(root->left == nullptr && root->right == nullptr)
            return true;
        return false;
    }
    int solve(TreeNode* root, int ans)
    {
        if(root == nullptr)
            return 0;

        ans = ans*10 + root->val;
        
        if(isLeaf(root))
            return ans;

        return solve(root->left, ans) + solve(root->right, ans);

    }
    int sumNumbers(TreeNode* root) 
    {
        return  solve(root, 0);

    }

};
// @lc code=end


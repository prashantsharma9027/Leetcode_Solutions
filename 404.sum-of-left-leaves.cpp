/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
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
    int solve(TreeNode * root , bool flag)
    {   
        if(root == nullptr)
        {
            return 0;
        }

        if(flag == 0 && root->right == nullptr && root->left == nullptr)
        {
            return root->val;
        }

        return solve(root->left , 0) + solve(root->right , 1);

        


    }

    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root , 1);
    }
};
// @lc code=end


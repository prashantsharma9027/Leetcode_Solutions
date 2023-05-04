/*
 * @lc app=leetcode id=235 lang=cpp
 *
 * [235] Lowest Common Ancestor of a Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // RECURSIVE

        // if(root == NULL)
        // {
        //     return NULL;
        // }

        // if(root->val < p->val && root->val < q->val)
        // {
        //     return lowestCommonAncestor(root->right , p , q);
        // }
        // else if(root->val > p->val && root->val > q->val)
        // {
        //     return lowestCommonAncestor(root->left , p , q);
        // }
        // else
        // {
        //     return root;
        // }


        // ITERATIVE

        while(root!=NULL)
        {
            if(root->val < p->val && root->val < q->val)
            {
                root = root->right;
            }
            else if(root->val > p->val && root->val > q->val)
            {
                root = root->left;
            }
            else
            {
                return root;
            }
        }
        return root;
    }
};
// @lc code=end


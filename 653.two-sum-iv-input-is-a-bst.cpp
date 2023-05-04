/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
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
private: 
    void solve(TreeNode * root , vector<int> &in)
    {
        if(root == NULL)
        {
            return;
        }

        solve(root->left , in);
        in.push_back(root->val);
        solve(root->right , in);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> in;
        solve(root , in);

        int i = 0;
        int j = in.size()-1;

        while(i<j)
        {
            int sum = in[i] + in[j];

            if(sum == k) return true;
            else if(sum>k)
            {
                j--;
            }
            else
            {
                i++;
            }
        } 

        return false;
    }
};
// @lc code=end


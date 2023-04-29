/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
int findposition(vector<int> inorder ,int n , int element)
{
    for(int i = 0 ; i<n ; i++)
    {
        if(inorder[i] == element)
        {
            return i;
        }
    }
    return -1;
}

TreeNode* solve(vector<int>& inorder, vector<int>& preorder , int &index , int inorderStart , int inorderEnd , int n)
{
    if(index >= n|| inorderStart>inorderEnd) return NULL;
        
    int element = preorder[index++];
    TreeNode * root = new TreeNode(element);
    int position = findposition(inorder,n,element);
        
    root->left = solve(inorder,preorder, index , inorderStart , position - 1 , n);
    root->right = solve(inorder,preorder , index , position + 1 , inorderEnd , n);
    
    return root;
        
}

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int preorderIndex = 0;
        TreeNode* ans = solve(inorder,preorder,preorderIndex,0,n-1,n);
            
        return ans;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=987 lang=cpp
 *
 * [987] Vertical Order Traversal of a Binary Tree
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int , multiset<int>>> map;
        queue<pair<TreeNode* , pair<int , int>>> q;
        q.push({root , {0,0}});
        
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();
            TreeNode* node = curr.first;
            int x = curr.second.first;
            int y = curr.second.second;
            
            map[x][y].insert(node->val);
            
            if(node->left) {
                q.push({node->left , {x-1 , y+1}});
            }
            if(node->right) {
                q.push({node->right , {x+1 , y+1}});
            }
        }
        vector<vector<int>> result;
        for(auto p : map) {
            vector<int> ans;
            for(auto q : p.second) {
                ans.insert(ans.end(),q.second.begin(),q.second.end());
            }
            result.push_back(ans);
        }
        return result;
    }
};
// @lc code=end


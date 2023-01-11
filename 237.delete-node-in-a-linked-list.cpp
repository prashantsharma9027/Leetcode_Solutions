#include<bits/stdc++>
/*
 * @lc app=leetcode id=237 lang=cpp
 *
 * [237] Delete Node in a Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* aagewale = node->next;

        node->val = aagewale->val;

        node->next = aagewale->next;

        aagewale->next = NULL;
        delete(aagewale);
    }
};
// @lc code=end


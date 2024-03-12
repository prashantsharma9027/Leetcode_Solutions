/*
 * @lc app=leetcode id=1171 lang=cpp
 *
 * [1171] Remove Zero Sum Consecutive Nodes from Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode node=ListNode(0, head);
        ListNode* ptr=&node;
        int prefix=1000000;
        static ListNode* mp[2000001]={NULL};
        for( ; ptr; ptr=ptr->next)
        {
            prefix+=(ptr->val);
            mp[prefix]=ptr;
        }
        prefix=1000000, ptr=&node;
        
        for( ;ptr; ptr=ptr->next)
        {
            prefix+=(ptr->val);
            ptr->next=mp[prefix]->next;
        }
        return node.next;
    }
};
// @lc code=end


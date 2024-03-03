/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

            int count = 1;
        ListNode * temp = head;
        
        while(temp->next!= NULL)
        {
            count++;
            temp = temp->next;
        }
        
        if(count<n) return -1;
        
        int pos = count - n;
        
        count = 1;
        
        temp = head;
        
        
        while(count<=pos)
        {
            temp = temp->next;
            count++;
        }
        
        return temp->val;
        
    }
};
// @lc code=end


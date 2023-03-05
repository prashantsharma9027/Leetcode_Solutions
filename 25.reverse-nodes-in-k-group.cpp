#include<bits/stdc++>
/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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
int count1 = 0;
int length(ListNode* head){
    int ans = 0;
    ListNode* temp = head;
    while(temp!=NULL){
        ans++;
        temp=temp->next;
    }
    return ans;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL)
        {
            return NULL;
        }

        count1=length(head);
        if(count1<k) return head;

        
        ListNode * curr = head;
        ListNode * prev = NULL;
        ListNode * next = NULL;

        int count = 0;

        while(curr != NULL && count<k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }


        if(next != NULL)
        {
            
            head->next = reverseKGroup(next , k);
            
        }

        return prev;
    }
};
// @lc code=end


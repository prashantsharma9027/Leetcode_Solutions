/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
                ListNode* curr = head ;

        while(curr!=NULL && curr->next != NULL)
        {
            if(curr->val == curr->next->val)
            {
                ListNode* Nodetodelete = curr->next;
                ListNode* point = curr->next->next;
                curr->next = point;
                delete(Nodetodelete);
            }
            else
            {
                curr = curr->next;
            }
        }
        return head;  

    }
};
// @lc code=end


/*
 * @lc app=leetcode id=1669 lang=cpp
 *
 * [1669] Merge In Between Linked Lists
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *head2 = list2;
        ListNode *head1 = list1;

       
        while (head2->next != nullptr) 
        {
            head2 = head2->next;
        }
        
        int x = 0;
        int y = 0;

        while (x < a - 1) 
        {
            head1 = head1->next;
            x++;
        }

        ListNode *temp = head1->next;
        head1->next = list2;

        while (y < b - a) 
        {
            temp = temp->next;
            y++;
        }

        while (list2->next != nullptr) 
        {
            list2 = list2->next;
        }

        list2->next = temp->next;

        return list1;
    }
};

// @lc code=end


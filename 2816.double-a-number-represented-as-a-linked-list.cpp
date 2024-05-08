/*
 * @lc app=leetcode id=2816 lang=cpp
 *
 * [2816] Double a Number Represented as a Linked List
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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current != nullptr) 
        {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        
        ListNode *reversedHead = reverseList(head);
        ListNode *temp = reversedHead;
        int carry = 0;

        while (temp != nullptr) 
        {
            int val1 = temp->val * 2 + carry;
            temp->val = val1 % 10;
            carry = val1 / 10;
            temp = temp->next;
        }

        if (carry > 0) 
        {
            ListNode *newNode = new ListNode(carry);
            temp = reversedHead;
            while (temp->next != nullptr) 
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }


        return reverseList(reversedHead);

    }
};class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        
    }
};
// @lc code=end


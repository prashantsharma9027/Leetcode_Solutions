/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
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
    int pairSum(ListNode* head) {
        // int ans = 0;

        // vector<int>temp;

        // ListNode* tempp = head;

        // int size = 0;

        // while(tempp!=NULL)
        // {
        //     temp.push_back(tempp->val);
        //     size++;
        //     tempp = tempp->next;
        // }


        // for(int i = 0 ; i<=(size/2)-1 ; i++)
        // {
        //     int sum = temp[i] + temp[size-1-i];

        //     ans = max(ans , sum);
        // }

        // return ans;


        ListNode* slow = head;
        ListNode* fast = head;
        int maxVal = 0;

        while(fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode *nextNode, *prev = NULL;
        while (slow) 
        {
            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        while(prev)
        {
            maxVal = max(maxVal, head -> val + prev -> val);
            prev = prev -> next;
            head = head -> next;
        }

        return maxVal;
    }
};
// @lc code=end


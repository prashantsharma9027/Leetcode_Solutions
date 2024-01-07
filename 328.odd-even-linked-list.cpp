/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head) {

        ListNode * odd = new ListNode();
        ListNode * heado = odd;
        ListNode * tailo = odd;


        ListNode * even = new ListNode();
        ListNode * heade = even;
        ListNode * taile = even;
        

        
        int count = 1;

        while(head!=NULL)
        {
            if(count%2!=0)
            {
                ListNode * temp = new ListNode(head->val);
                tailo->next = temp;
                tailo = temp;
            }
            else
            {
               
                ListNode * temp = new ListNode(head->val);
                taile -> next = temp;
                taile = temp;
            }

            head = head->next;
            count++;
        }

        heado = heado->next;
        heade = heade->next;

        tailo -> next = heade;

        return heado;       
    }
    
};
// @lc code=end


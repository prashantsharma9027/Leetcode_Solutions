/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = newNode;
        }
    }
public:
    Node* copyRandomList(Node* head) {

        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp -> next;
        }

        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) {
            Node* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;
            
            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode  = next;
        }

        temp = head;
        
        while(temp!=NULL){
            if(temp->next!=NULL){
                temp->next ->random = temp->random? temp->random ->next : temp ->random;
            }
            temp = temp->next ->next;
        }

        originalNode = head;
        cloneNode = cloneHead;
        
        while (originalNode!= NULL && cloneNode != NULL) {
            originalNode -> next = cloneNode->next;
            originalNode = originalNode -> next;
            if (originalNode!= NULL) {
                cloneNode -> next = originalNode -> next;
                }
            cloneNode= cloneNode -> next;
            }
            
        return cloneHead;         
    }
};
// @lc code=end


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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true; 
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
         ListNode* prev=NULL;
         ListNode* front=NULL;
         ListNode* temp=slow;
         while(temp){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;

         }
         ListNode* firstHalf = head;
        ListNode* secondHalf = prev;
         while (secondHalf != NULL) {
            if (firstHalf->val != secondHalf->val) {
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

         return true;
         
    }
};
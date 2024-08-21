/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*temp = node;
        ListNode*temp1 = temp->next;
        while(temp1->next!=NULL){
            temp->val=temp1->val;
            temp=temp->next;
            temp1=temp1->next;
        }
        temp->val=temp1->val;
        temp->next=NULL;
    }
};
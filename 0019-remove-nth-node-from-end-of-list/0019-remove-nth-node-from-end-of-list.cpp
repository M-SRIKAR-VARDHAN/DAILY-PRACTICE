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
        if(head==NULL){return head;}
        ListNode* temp=head;
        int cnt =1;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt++;
        }
        if(n>cnt){
            return head;
        }
        if(n==cnt){
            head=head->next;
            return head;
        }
        temp=head;
        for(int i=1;i<cnt-n;i++){
            temp=temp->next;
        }
        if(temp->next->next!=NULL){
        temp->next=temp->next->next;
        }
        else{
            temp->next=NULL;
        }

       return head;
    }
};
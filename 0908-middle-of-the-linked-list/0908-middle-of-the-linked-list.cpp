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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp= head;
        int n=0;
        while(temp!=NULL){
                n++;
                temp=temp->next;
        }
        if(n==1){
            return head;
        }
        int k=(n/2)+1;
        temp=head;
        for(int i=1;i<k;i++){
            temp=temp->next;
        }

        return temp;
    }
};
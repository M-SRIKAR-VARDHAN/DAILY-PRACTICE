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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       
         int carry=0;
        
         ListNode* head=new ListNode();
         
          
         ListNode* temp=head;
         int sum=0;
        
        while(l1!=NULL||l2!=NULL){
            
         int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x + y + carry;
             carry = sum / 10;
              temp->next = new ListNode(sum % 10);
              temp=temp->next;
            if(l1!=NULL){
            l1=l1->next;
        }
        if(l2!=NULL){
            l2=l2->next;
        }
        }
        if(carry){
            temp->next = new ListNode(carry);
        }
        head=head->next;
        return head;
       
    }
};

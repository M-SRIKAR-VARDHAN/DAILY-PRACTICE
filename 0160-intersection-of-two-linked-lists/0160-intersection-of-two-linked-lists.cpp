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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp1=headA;
        ListNode * temp2=headB;
        int m=0,n=0;
        while(temp1!=NULL){
            m++;
            temp1=temp1->next;
        }
          while(temp2!=NULL){
            n++;
            temp2=temp2->next;
        }
        temp1=headA;
         temp2=headB;
        if(n>=m){
            int d=n-m;
            for(int i=0;i<d;i++){
                temp2=temp2->next;
            }
        }else{
            int d=m-n;
            for(int i=0;i<d;i++){
                temp1=temp1->next;
            }
        }
        while(temp1!=NULL&&temp2!=NULL){
            if(temp1!=temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }else{
                return temp1;
            }

           
        }
    return NULL;
    }
};
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
         if (!head || !head->next) return head;

        std::queue<int> oddQueue;
        std::queue<int> evenQueue;

        ListNode* temp = head;
        int index = 1;

        // Separate nodes into odd and even queues
        while (temp != nullptr) {
            if (index % 2 != 0) {
                oddQueue.push(temp->val);
            } else {
                evenQueue.push(temp->val);
            }
            temp = temp->next;
            index++;
        }

        temp = head;

        // Reassign nodes from the odd queue
        while (!oddQueue.empty()) {
            temp->val = oddQueue.front();
            oddQueue.pop();
            temp = temp->next;
        }

        // Reassign nodes from the even queue
        while (!evenQueue.empty()) {
            temp->val = evenQueue.front();
            evenQueue.pop();
            temp = temp->next;
        }

        return head; 
    }
};
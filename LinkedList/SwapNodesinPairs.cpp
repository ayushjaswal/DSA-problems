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
    ListNode* swapPairs(ListNode* head) {
        ListNode *p, *q, *dummy, *prev;
        dummy = new ListNode;
        dummy->val = 0;
        dummy->next = head;
        prev = dummy;
        if(head && head->next){
            q = head;
            p = head->next;
        }
        else{
            return head;
        }
        while(p){
            q->next =  p->next;
            p->next = q;
            prev->next = p;
            prev = q;
            if(q->next){
                p = q->next->next;
                q = q->next;
            }
            else{
                break;
            }
        }
        return dummy->next;
    }
};
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
//took a lot of help to solve this 😰
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
    
        int len = 1;
        ListNode * p, *q, *km;
        p = head;
        if( head == NULL || k == 0 || head->next == NULL){
            return head;
        }
        while(p->next && ++len){
            p = p->next;
        }
        p->next = head;
        k = k % len;
        k = len-k;
        while(k){
            p = p->next;
            k--;
        }
        head = p->next;
        p->next = NULL;
        return head;
    }
};
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
        ListNode *p, *q, *temp;
        int length = 0;
        p = head;
        q = head;
        temp = head;
        while(temp){
            temp = temp->next;
            length++;
        }
        if(n == length){
            return p->next;
        }
        if(n > length){
            return NULL;
        }
        temp = head;
        for(int i = 0; i < length - n; i++){
            if(p && q){
                p = q;
                q = q->next;
            }
            else{
                break;
            } 
        }
        if(length > 1){
            p->next = q->next;
            p = temp;
        }
        else{
            p = q->next;
            delete q;
            return p;
        }
        delete q;
        head = p;
        return head;
    }
};
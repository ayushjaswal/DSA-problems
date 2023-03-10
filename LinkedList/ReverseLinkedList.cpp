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
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *p, *q, *k;
        if (head)
        {
            p = head;
            k = p->next;
            q = NULL;
            while (k)
            {
                p->next = q;
                q = p;
                p = k;
                k = k->next;
            }
            p->next = q;
            q = p;
            head = p;
        }
        else
        {
            return NULL;
        }
        return head;
    }
};
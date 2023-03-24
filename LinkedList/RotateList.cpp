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
    ListNode *rotateRight(ListNode *head, int k)
    {
        int len = 1;
        ListNode *p, *q;
        p = head;
        if (head == NULL || k == 0 || head->next == NULL)
        {
            return head;
        }
        while (p->next)
        {
            q = p;
            p = p->next;
            len++;
        }
        k = k % len;
        // k = len-k;
        while (k)
        {
            // rotateOnce(p, q, head);
            while (p->next)
            {
                q = p;
                p = p->next;
            }
            q->next = NULL;
            p->next = head;
            head = p;
            k--;
        }
        return head;
    }
};
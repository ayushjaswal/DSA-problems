/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *p, *q;
        if (!(head))
        {
            return false;
        }
        p = q = head;
        do
        {
            p = p->next;
            q = q->next;
            if (q)
            {
                q = q->next;
            }
        } while (q && p && p != q);
        if (p == q && p != NULL && q != NULL)
        {
            return true;
        }
        return false;
    }
};
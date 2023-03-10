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
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *p, *q;
        p = head;
        if (head)
        {
            q = p->next;
            while (q)
            {
                if (q->val == val)
                {
                    p->next = q->next;
                    delete q;
                    q = p->next;
                }
                else
                {
                    p = q;
                    q = q->next;
                }
            }
        }
        p = head;
        if (head && head->val == val && head->next != NULL)
        {
            head = head->next;
            delete p;
        }
        else if (head && head->val == val && head->next == NULL)
        {
            return NULL;
        }
        return head;
    }
};
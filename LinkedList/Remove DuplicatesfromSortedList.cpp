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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *p, *q;
        q = head;
        if (head)
        {
            p = head->next;
            while (p)
            {
                if (p->val == q->val)
                {
                    q->next = p->next;
                    delete p;
                    p = q->next;
                }
                else
                {
                    q = p;
                    p = p->next;
                }
            }
        }
        else
        {
            return head;
        }

        return head;
    }
};
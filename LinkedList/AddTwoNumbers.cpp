// Medium level question
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *q, *p, *newset, *tail;
        p = l2;
        q = l1;
        int carry = 0;
        while (p && q)
        {
            p->val = p->val + q->val + carry;
            if (p->val > 9)
            {
                p->val = (p->val) % 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            tail = p;
            p = p->next;
            q = q->next;
        }
        if (q)
        {
            tail->next = q;
            while (q)
            {
                cout << "There exist q" << endl;
                q->val = q->val + carry;
                if (q->val > 9)
                {
                    q->val = (q->val) % 10;
                    carry = 1;
                }
                else
                {
                    carry = 0;
                }
                tail = q;
                q = q->next;
            }
        }
        if (p)
        {
            while (p)
            {
                p->val = p->val + carry;
                if (p->val > 9)
                {
                    p->val = (p->val) % 10;
                    carry = 1;
                }
                else
                {
                    carry = 0;
                }
                tail = p;
                p = p->next;
            }
        }
        if (carry > 0)
        {
            newset = new ListNode;
            newset->val = carry;
            newset->next = NULL;
            tail->next = newset;
        }
        return l2;
    }
};
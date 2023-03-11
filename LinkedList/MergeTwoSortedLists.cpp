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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *last, *third, *first, *second;
        first = list1;
        second = list2;
        if (first && second)
        {
            if (first->val < second->val)
            {
                last = third = first;
                first = first->next;
                last->next = NULL;
            }
            else
            {
                last = third = second;
                second = second->next;
                last->next = NULL;
            }
            while (first && second)
            {
                if (first->val < second->val)
                {
                    last->next = first;
                    last = first;
                    first = first->next;
                    last->next = NULL;
                }
                else
                {
                    last->next = second;
                    last = second;
                    second = second->next;
                    last->next = NULL;
                }
            }
            if (first)
            {
                last->next = first;
            }
            else if (second)
            {
                last->next = second;
            }
        }
        else if (first && second == NULL)
        {
            third = first;
        }
        else if (first == NULL && second)
        {
            third = second;
        }
        else
        {
            return NULL;
        }
        return third;
    }
};
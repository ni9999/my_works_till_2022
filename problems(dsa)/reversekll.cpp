/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// let the cases 1 2 3 4 5 6 and B = 3
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode *prev = NULL, *curr = NULL, *next = A, *begin, *beginprev = NULL, *first = NULL;

    // 3 2 1 here 1 is begin and 3 is prev;

    // then we do beginprev = begin so 1 is beginprev for 6 5 4
    // 6 5 4 here 4 is begin and 6 is prev; beginprev is 1 // we need 1->6
    // we do beginprev->next = prev

    while (next != NULL)
    {
        begin = next;
        int x = B;
        while(x--)
        {
            curr = next;
            next = next->next;
            curr->next = prev;
            prev = curr;
        }

        if(beginprev != NULL)    
            beginprev->next = prev;
        beginprev = begin;

        if(first == NULL) first = prev;

    }

    begin->next = NULL;


    return first;
}

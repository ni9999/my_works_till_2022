/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverseList(ListNode* A) {
    if(A->next->next == NULL) return A;
    else
    {
        ListNode *tmp = A;
        while(tmp->next->next != NULL)
            tmp = tmp->next;

        ListNode *reverse = tmp->next;
        
        tmp->next = NULL;
        reverse->next = reverseList(A);

        return reverse;
    }
}

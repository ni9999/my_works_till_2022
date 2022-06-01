/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    int asize = 0;
    
    ListNode *tmp = A;
    
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
        asize++;
    }
    if(tmp != NULL) asize++;

    int middle = asize/2 + 1;
    int index = middle - B;
    if(index < 1) return -1;


    tmp = A;
    int i = 1;
    while(i < index)
    {
        tmp = tmp->next;
        i++;
    }
        

    return tmp->val;
}

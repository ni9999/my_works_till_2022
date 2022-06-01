#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};


ListNode *reverseList(ListNode *A)
{
    ListNode *tmp = A;

    ListNode *reverse = new ListNode();
    reverse->val = A->val;
    reverse->next = NULL;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;

        ListNode *X = new ListNode();
        X->val = tmp->val;
        X->next = reverse;
        reverse = X;
    }
    return reverse;
}


int main()
{
    ListNode *chain;
    chain = new ListNode();
    
    chain->val = 0;
    chain->next = NULL;

    for (int i = 1; i < 10; i++)
    {
        ListNode *A;
        A = new ListNode();
        A->val = i;
        A->next = chain;
        chain = A;
    }

    reverseList(chain);
    
    while(chain != NULL)
    {
        cout << chain->val << endl;
        chain = chain->next;
    }
}
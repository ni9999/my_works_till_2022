#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *solve(ListNode *A, ListNode *B)
{
    int add = 0;
    int rem = 0;
    int a = 0;
    int b = 0;

    ListNode *ans = NULL;
    ListNode *tmp = ans;

    while (A != NULL || B != NULL)
    {
        if (A == NULL)
            a = 0;
        else
        {
            a = A->val;
            A = A->next;
        }

        if (B == NULL)
            b = 0;
        else
        {
            b = B->val;
            B = B->next;
        }


        add = rem + a + b;
        rem = 0;
        if (add > 9)
        {
            add -= 10;
            rem = 1;
        }

        ListNode *tmp2 = new ListNode(add); // tmp->val = add;
        tmp2->next = tmp;
        ans = tmp2;
        tmp = ans;
    }
    if (rem == 1)
    {
        ListNode *tmp2 = new ListNode(rem);
        tmp2->next = tmp;
        ans = tmp2;
    }


    ListNode *prev = ans;
    ListNode *next = ans->next;
    ListNode *curr = ans;
    ans->next = NULL;

    while (next != NULL)
    {
        curr = next;        
        next = next->next;
        curr->next = prev;
        prev = curr;
    }
    

    return prev;
}

int main()
{
    ListNode *A = new ListNode(8);
    A->next = new ListNode(9);
    A->next->next = new ListNode(9);
    A->next->next->next = new ListNode(9);
    A->next->next->next->next = NULL;

    ListNode *B = new ListNode(9);
    B->next = new ListNode(8);
    B->next->next = NULL;

    ListNode *ans = solve(A, B);

    // check
    ListNode *tmp = ans;
    while (tmp != NULL)
    {
        cout << tmp->val << "->";
        tmp = tmp->next;
    }
    cout << endl;
}

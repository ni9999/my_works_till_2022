#include<iostream>
#include<vector>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* solve(ListNode *A)
{
    ListNode *tmp = A; 

    while(tmp->next != NULL)
    {
        if(tmp->val == tmp->next->val)
            tmp->next = tmp->next->next;

        else
            tmp = tmp->next;
    }

    return A;

    // a less efficient way
    // ListNode *curr = A, *next = A->next, *tmp; 

    // while(next != NULL)
    // {
    //     if(curr->val == next->val)
    //     {
    //         next = next->next;
    //         curr->next = next;
    //     }

    //     else
    //     {
    //         curr = next;
    //         next = next->next;
    //     }
    // }

}

int main()
{
    ListNode *A = new ListNode(5);

    A->next = NULL;
    
    ListNode *tmp;
    for (int i = A->val - 1; i > 0; i--)
    {
        tmp = new ListNode(i);
        tmp->next = A;
        A = tmp;
        tmp = new ListNode(i);
        tmp->next = A;
        A = tmp;
    }

    A = solve(A);

    // check 
    tmp = A;
    while (tmp != NULL)
    {
        cout << tmp->val << "->";
        tmp = tmp->next;
    }
    cout << endl;

}

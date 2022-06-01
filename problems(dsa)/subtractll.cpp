#include<iostream>
#include<vector>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
};

ListNode* solve(ListNode *A)
{
    // edge case if one element the whole program does not work
    if(A->next == NULL) return A;


    // counting size and half size of the ll
    int n = 0;
    ListNode *tmp = A;
    while (tmp != NULL)
    {
        n++;
        tmp = tmp->next;
    }

    int x = n/2;
    if(n%2 == 1) x++;


    // reverse last half elements
    tmp = A;
    for (int i = 0; i < x - 1; i++)
    {
        tmp = tmp->next;
    }

    ListNode *unchanged = tmp;
    tmp = tmp->next;

    ListNode *prev = tmp, *next = tmp->next;
    tmp->next = NULL;
    while (next != NULL)
    {
        tmp = next;
        next = next->next;
        tmp->next = prev;
        prev = tmp;
    }
    unchanged->next = prev;




    // doing the actual work --> subtracting
    // prev and A 
    tmp = A;
    while (prev != NULL)
    {
        tmp->val = prev->val - tmp->val;
        tmp = tmp->next;
        prev = prev->next; 
    }
    




    // reverse last half elements again
    tmp = A;
    for (int i = 0; i < x - 1; i++)
    {
        tmp = tmp->next;
    }

    unchanged = tmp;
    tmp = tmp->next;

    prev = tmp;
    next = tmp->next;
    tmp->next = NULL;
    while (next != NULL)
    {
        tmp = next;
        next = next->next;
        tmp->next = prev;
        prev = tmp;
    }
    unchanged->next = prev;

    return A;
}

int main()
{
    ListNode *A = new ListNode();

    A->val = 2;
    A->next = NULL;
    
    ListNode *tmp;
    for (int i = A->val - 1; i > 0; i--)
    {
        tmp = new ListNode();
        tmp->val = i;
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





//////////////////////////////////////////////////////////////////////
//////////////************************************////////////////////
//////////////wwwwwwwwwwooooooooowwwwwwwwwwwwwwwww////////////////////
//////////////************************************////////////////////
//////////////////////////////////////////////////////////////////////
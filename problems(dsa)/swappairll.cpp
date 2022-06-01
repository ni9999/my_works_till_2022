
#include<iostream>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* swapPairs(ListNode* A) {
    ListNode *tmp1 = A, *tmp2, *tmp3, *tmp4 = NULL, *begin;
    bool beginbool = true;
    
    if(tmp1->next == NULL) return A;

    while(1)
    {
        if(tmp1 != NULL) 
        {
            tmp2 = tmp1->next;
            tmp1->next = NULL;
        }
        
        else break;

        if(tmp2 != NULL)
        {
            tmp3 = tmp2->next;

            if(beginbool) {
                begin = tmp2;
                beginbool = false;
            }


            tmp2->next = tmp1;
        
            if(tmp4 !=NULL)
                tmp4->next = tmp2;

            tmp4 = tmp1; 
            tmp1 = tmp3;   
        }

        else {
            tmp4->next = tmp1;
            break;
        } 
    }

    return begin;
}

int main()
{
    ListNode *A = new ListNode(97);

    A->next = NULL;
    
    ListNode *tmp;
    for (int i = A->val - 1; i > 0; i--)
    {
        tmp = new ListNode(i);
        tmp->next = A;
        A = tmp;
    }

    A = swapPairs(A);

    // check 
    tmp = A;
    while (tmp != NULL)
    {
        cout << tmp->val << "->";
        tmp = tmp->next;
    }
    cout << endl;

}

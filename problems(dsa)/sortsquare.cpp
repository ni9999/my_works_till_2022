#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> A;
    A = {-6, -3, -1, 2, 4, 5};
    int i = 0;
    while(A[i] < 0) i++;

    for (int i = 0; i < A.size(); i++)
    {
        A[i] = A[i] * A[i];
    }
    
  
    int n = i;
    int p = A.size() - i;

    int neg[n];
    int pos[p];

    for (int i = 0; i < n; i++)
    {
        neg[i] = A[i];
    }

    int tmp;
    i = 0;
    while(i < n/2)
    {
        tmp = neg[i];
        neg[i] = neg[n-1 - i];
        neg[n-1 - i] = tmp;
        i++;
    }


    for (int i = 0; i < p; i++)
    {
        pos[i] = A[n + i];
    }
    
    i = 0; int j = 0, k = 0;
    while(i < n && j < p)
    {
        if(neg[i] < pos[j])
            {
                A[k] = neg[i];
                i++;
            }
        else
            {
                A[k] = pos[j];
                j++;
            }
        k++;
    }

    while(i < n)
    {
        A[k] = neg[i];
        i++;
        k++;
    }
    
    while (j < p)
    {
        A[k] = pos[j];
        j++;
        k++;
    }

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i];
    }
    
    for (int i = 0; i < p; i++)
    {
        //cout << pos[i];
    }
}

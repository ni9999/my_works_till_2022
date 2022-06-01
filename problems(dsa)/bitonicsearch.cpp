#include<iostream>
#include<vector>
using namespace std;
int solve(vector <int> A, int B)
{
    int l = 0, r = A.size() - 1;
    int max;
    int i_B = -1;
    while(1)
    {
        max = (l+r)/2;
        if(A[max] > A[max-1] && A[max] > A[max+1]) break;
        else if(A[max] > A[max-1] && A[max] < A[max+1]) l = max + 1; 
        else if(A[max] < A[max-1] && A[max] > A[max+1]) r = max;
    }
    l = 0;
    r = max;
    int m;
    while(l <= r)
    {
        m = (l+r) / 2;
        if(B == A[m]) return m;
        else
        {
            if(A[m] < B) l = m + 1;
            else r = m - 1; 
        }
    }

    l = max + 1;
    r = A.size() - 1;
    while(l <= r)
    {
        m = (l+r) / 2;
        if(B == A[m]) return m;
        else
        {
            if(A[m] < B) r = m - 1;
            else l = m + 1;
        }
    }
    
    return -1;
}

int main()
{
    vector<int> A;
    A = {1, 20, 50, 40, 10};
    cout << solve(A, 5) << endl;
    cout << solve({3, 9, 10, 20, 17, 5, 1}, 20) << endl;
}

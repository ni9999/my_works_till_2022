#include<iostream>
#include<vector>
using namespace std;
int solve(vector <int> A, int B)
{
    int l = 0;
    int r = A.size() - 1;
    int m;
    while(l <= r)
    {
        m = (l+r)/2;
        if(A[m] < B) l = m + 1;
        else if(A[m] > B) r = m - 1;
        else
        {
            while(A[m] == B) m++;
            return m;
        }
    }
    if(A[m] < B) return m + 1;
    else return m;
}

int main()
{
    vector<int> A;
    A = {1,9,9};
    cout << solve(A,9);
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector <int> A, int B)
{
    sort(A.begin(), A.end());
    int i = 0, j = 1;
    for (i = 0; i < A.size(); i++)
    {
        for (; j < A.size(); j++)
        {
            if(i != j && A[j] - A[i] == B) return 1;
            if(A[j] - A[i] > B) break; 
        }   
    }
    return 0;
}

int main()
{
    cout << solve({10,20,50,52}, 2);
}

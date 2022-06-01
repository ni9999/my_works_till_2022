#include<iostream>
#include<vector>
using namespace std;
double solve(vector <int> A, vector<int> B)
{
    vector<int> C(A.size() + B.size(), 0);
    int i = 0, j = 0, k = 0;
    while(i < A.size() && j < B.size())
    {
        if(A[i] < B[j]) 
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }
    while(i < A.size())
    {
        C[k] = A[i];
        i++;
        k++;
    }
    while(j < B.size())
    {
        C[k] = B[j];
        j++;
        k++;
    }

        for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << endl;
    }
    
    double ans;
    if(C.size()%2 == 0) ans = (C[C.size()/2] + C[C.size()/2 -1])/2;
    else ans = C[C.size()/2];

    return ans;
}

int main()
{
    cout << solve({1,2}, {2,3});
}


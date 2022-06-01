#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int minxor(vector<int> A)
{
    sort(A.begin(), A.end());
    int ans = A[0] ^ A[1];
    for(int i = 1; i < A.size()-1; i++)
    {
        int x = A[i] ^ A[i+1];
        if(ans > x) ans = x;
    }
    return ans;
}


int main()
{

    cout << minxor({12,4,6,2});
}

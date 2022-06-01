/// O(n^2) soln
 
int liseli(const vector<int> &A, vector<int> &dp, int B)
{
    if(dp[B] != -1) return dp[B];

    int x = 1; // what if no greater element then loop below will be meaningless. anyway we need to output 1 in that case
    for (int i = B+1; i < A.size(); i++)
    {
        if(A[i] > A[B])
        {
            int is = 1 + liseli(A, dp, i);
            if(is > x) x = is;
        }
    }

    dp[B] = x;

    return dp[B];
}


int Solution::lis(const vector<int> &A)
{
    vector<int> dp (A.size(), -1);

    int ans = 0;
    for(int i = 0; i < A.size(); i++)
    {
        int tmp = liseli(A, dp, i);
        if (tmp > ans) ans = tmp;
    }
    return ans;
}
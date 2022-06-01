int Solution::numRange(vector<int> &A, int B, int C) {
    int ans = 0, sum = 0, sumfirst = 0;

    for(int i = 1; i <= A.size(); i++)
    {
        sumfirst += A[i];
        sum = sumfirst;
        
        if(sum >= B && sum <= C) ans++;

        for(int prev = 0, next = i; next < A.size(); prev++, next++)
        {
            sum += A[next];
            sum -= A[prev];

            if(sum >= B && sum <= C) ans++;
        }
    }

    return ans;
}

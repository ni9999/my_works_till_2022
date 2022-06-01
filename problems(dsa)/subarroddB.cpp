int Solution::solve(vector<int> &A, int B) {
    vector<int> odds = {-1};
    
    for(int i = 0; i < A.size(); i++)
        if(A[i] % 2 == 1) odds.push_back(i);

    if(odds.size() < B+1) return 0;

    odds.push_back(A.size());

    int ans = 0;


    for(int i = 1, j = B; j < odds.size() - 1; i++, j++)
    {
        if(B == 0)
        {
            int x = odds[i] - odds[i-1] -1;
            ans += (x*(x+1)/2);
        }

        else
        {
            int l = odds[i] - odds[i-1] - 1;
            int r = odds[j+1] - odds[j] - 1;
            ans += 1 + l + r + (l*r);
        }

    }

    return ans;
}


vector<vector<int>> maxpath;



int getmax(vector<vector<int> > &A, int i, int j)
{
    if(i == A.size() - 1) 
        return A[i][j];

    if(maxpath[i][j] != -1) return maxpath[i][j];

    if(getmax(A, i+1, j) > getmax(A, i+1, j+1))
        maxpath[i][j] = A[i][j] + getmax(A, i+1, j);
    else maxpath[i][j] = A[i][j] + getmax(A, i+1, j+1);

    return maxpath[i][j];
}




int Solution::solve(vector<vector<int> > &A) {
    maxpath = A;

    for(int i = 0; i < A.size(); i++)
        for(int j = 0; j < A[i].size(); j++)
            maxpath[i][j] = -1;

    return getmax(A, 0, 0);
}

vector<int> Solution::solve(vector<vector<int> > &A) {
    map<int, int> col;
    vector<int> ans;

    for(int i = 0; i < A[0].size(); i++)
    {
        for(int j = 0; j < A.size(); j++)
        {
            // get every item of given vector into map
            // value for duplicate numbers
            if(col.find(A[j][i]) == col.end()) col[A[j][i]] = 1;
            else col[A[j][i]] ++; 
        }
    }

    for(auto it = col.begin(); it != col.end(); it++)
    {
        while(it->second --)
            ans.push_back(it->first);
    }

    return ans;
}
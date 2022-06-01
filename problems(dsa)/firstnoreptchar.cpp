string Solution::solve(string A) {
    string ans;
    vector<int> hash(150, 0);
    queue<char> norept;

    for(int i = 0; i < A.size(); i++)
    {
        hash[A[i]] ++;
        if(hash[A[i]] == 1) norept.push(A[i]);
        while (hash[norept.top()] != 1 && !norept.empty()) norept.pop();

        if(norept.empty()) ans.push_back('#');
        else ans.push_back(norept.top());
    }

    return ans;

}

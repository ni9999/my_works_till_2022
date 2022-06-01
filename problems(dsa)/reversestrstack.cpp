string Solution::reverseString(string A) {
    stack<char> S;
    
    for(int i = 0; i < A.size(); i++)
        S.push(A[i]);
    
    for(int i = 0; i < A.size(); i++)
    {
        A[i] = S.top();
        S.pop();
    }
    return A;
}

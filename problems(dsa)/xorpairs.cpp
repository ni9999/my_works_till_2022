int Solution::solve(vector<int> &A, int B) {
    int pairs = 0;
    unordered_map<int, int> Axor;
    for(int i = 0; i < A.size(); i++)
    {
        Axor.insert({A[i], A[i] ^ B});
        if (Axor.find(A[i] ^ B) != Axor.end()) pairs++;
    }

    return pairs;
}

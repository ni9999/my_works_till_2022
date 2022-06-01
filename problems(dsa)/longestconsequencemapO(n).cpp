int occurrance(unordered_map<int, int> &map, int x)
{
    if(map[x] == 1)
        map[x] += occurrance(map, x-1);

    return map[x];
}


int Solution::longestConsecutive(const vector<int> &A) {
    unordered_map<int, int> map;

    for(int i = 0; i < A.size(); i++)
        map[A[i]] = 1;

    int ans = 0;

    for(int i = 0; i < A.size(); i++)
    {
        int tmp = occurrance(map, A[i]);
        
        if(tmp > ans) ans = tmp;
    }


    return ans;
}
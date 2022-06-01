vector<int> ways (37, -1); // need ways[36] value. so the size is 37. for constrain 1 <= A <= 36;
int Solution::climbStairs(int A) {
    if(A == 0) return 0;
    if(A == 1) return 1;
    if(A == 2) return 2;

    if(ways[A] != -1) return ways[A];

    int way = climbStairs(A-1) + climbStairs(A-2); 

    ways[A] = way;

    return way;
}

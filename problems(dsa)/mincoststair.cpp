#include <vector>
#include <iostream>
using namespace std;

vector<int> dp(1000, -1);

int minCost(vector<int> &cost, int l, int h)
{
    if (h >= cost.size())
        return 0;

    if (dp[h] == -1)
        dp[h] = cost[h] + minCost(cost, h + 1, h + 2);
    if (dp[l] == -1)
        dp[l] = cost[l] + minCost(cost, l + 1, l + 2);

    if (dp[h] > dp[l])
        return dp[l];
    else
        return dp[h];
}

int minCostClimbingStairs(vector<int> &cost)
{
    return minCost(cost, 0, 1);
}

int main()
{
    vector<int> x = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << minCostClimbingStairs(x);
}

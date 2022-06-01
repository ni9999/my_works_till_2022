#include <iostream>
#include <vector>
using namespace std;

int solve(vector<vector<int>> A, int x)
{
    if (A[0][0] > x)
        return 0;

    int l = 0, r = A.size() - 1;
    int m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (A[m][0] < x)
            l = m + 1;
        else if (A[m][0] > x)
            r = m - 1;
        else
            return 1;
    }
    if (A[m][0] > x)
        m--;

    l = 0, r = A[0].size() - 1;
    int n;
    while (l<=r)
    {
        n = (l + r) / 2;
        if (A[m][n] < x)
            l = n + 1;
        else if (A[m][n] > x)
            r = n - 1;
        else
            return 1;
    }
    return 0;
}

int main()
{
    vector<vector<int>> A1, A2, A3, A4;
    int B = 3;
    A1 = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}};
    A2 = {
        {5, 17, 100, 111},
        {119, 120, 127, 131}};
    A3 = {{1}};
    A4 = {
        {2, 3, 4, 6},
        {16, 19, 33, 36},
        {37, 38, 38, 41},
        {47, 47, 50, 51},
        {55, 57, 58, 62},
        {63, 65, 66, 66},
        {68, 70, 75, 77},
        {78, 84, 84, 86},
        {86, 87, 88, 92},
        {94, 95, 96, 97}
    };

    cout << solve(A1, B) << endl;
    cout << solve(A2, B) << endl;
    cout << solve(A3, 1) << endl;
    cout << solve(A4, 81) << endl;
}

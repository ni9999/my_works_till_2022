#include <iostream>
#include <vector>
using namespace std;
vector<int> searchRange(vector<int> A, int B)
{
    vector<int> R(2, -1);
    int x = B - 1;
    int y = B + 1;

    int l = 0;
    int r = A.size() - 1;
    int m = 0;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (A[m] <= x)
            l = m + 1;
        else if (A[m] > x)
            r = m - 1;
    }
   if (A[m] > x)
        R[0] = m;
    else
       R[0] = m + 1;

    l = 0;
    r = A.size() - 1;

    while (l <= r)
    {
        m = (l + r) / 2;
        if (A[m] < y)
            l = m + 1;
        else if (A[m] >= y)
            r = m - 1;
    }
   if (A[m] < y)
        R[1] = m;
    else
        R[1] = m - 1;

    if (A[R[0]] == B)
        return R;
    else
        return {-1, -1};
}

int main()
{
    vector<int> C = searchRange({1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10}, 10);
    vector<int> x = searchRange({1, 2, 2, 3}, 2);
    vector<int> y = searchRange({10000000}, 10000000); 
    //previously :: I was using float that time.........this example does not work for some disgusting reason. it seems that float does not work so simply. for any fractional data type like float or double - the binary representation is problematic. so this sucks.

    cout << x[0] << " " << x[1] << endl;
    cout << C[0] << " " << C[1] << endl;
    cout << y[0] << " " << y[1];
}

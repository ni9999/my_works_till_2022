#include <iostream>
using namespace std;

void solve()
{
    int n, div = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (A[i] == 0)
        {
            div = -1;
            break;
        }
        
        while (A[i] <= A[i - 1])
        {
            A[i - 1] /= 2;
            div++;
        }
    }

    cout << div << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
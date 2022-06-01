#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m;

    cin >> n;
    vector<int> a(n, -1);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    vector<int> b(m, -1);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int amax = a[0], bmax = b[0];

    for (int i = 0; i < n; i++)
        if (a[i] > amax)
            amax = a[i];

    for (int i = 0; i < m; i++)
        if (b[i] > bmax)
            bmax = b[i];

    // for alice first turn
    if (amax >= bmax)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;

    // for bob
    if (bmax >= amax)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
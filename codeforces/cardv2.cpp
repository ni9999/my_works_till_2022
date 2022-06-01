#include <iostream>
#include <vector>
#include <algorithm>
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

    int x;
    if (a.size() > b.size())
        x = b.size();
    else
        x = a.size();

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // for alice first turn
    bool win = false;
    for (int i = a.size() - 1, j = b.size() - 1, it = 0; it < x; i--, j--, it++)
    {
        if (a[i] >= b[j])
        {
            cout << "Alice" << endl;
            win = true;
            break;
        }
    }

    if (!win)
        cout << "Bob" << endl;

    // for bob
    win = false;
    for (int i = b.size() - 1, j = a.size() - 1, it = 0; it < x; i--, j--, it++)
    {
        if (b[i] >= a[j])
        {
            // cout << b[i] << " " << a[j] <<" " <<  b.size()  << endl;
            cout << "Bob" << endl;
            win = true;
            break;
        }
    }

    if (!win)
        cout << "Alice" << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
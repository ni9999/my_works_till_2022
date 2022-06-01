#include <iostream>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x % 3 == 0)
        cout << "NORMAL" << endl;
    if (x % 3 == 1)
        cout << "HUGE" << endl;
    if (x % 3 == 2)
        cout << "SMALL" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
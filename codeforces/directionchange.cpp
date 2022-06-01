#include<iostream>
using namespace std;

void solve() 
{
	int n, m, x = 0, y = 0, moves;
    cin >> n >> m;
    if ((n == 1 || m == 1) && (n > 2 || m > 2))
        cout << -1 << endl;
    else if (n < m) {
        moves = 2 * (n - 1);
        int x = m - n;
        if(x % 2 == 0) moves += 2*x;
        else moves += 2*(x-1) + 1;
        cout << moves << endl;
    }
    else if (n > m) {
        moves = 2 * (m - 1);
        int x = n - m;
        if(x % 2 == 0) moves += 2*x;
        else moves += 2*(x-1) + 1;
        cout << moves << endl;
    }
    else cout << 2 * (n - 1) << endl;


}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
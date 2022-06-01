#include<iostream>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    long long flip = 0;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        flip += b[i];
    }

    flip %= n;

    cout << a[flip] << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
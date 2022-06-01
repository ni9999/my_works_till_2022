#include<iostream>
using namespace std;

void solve() 
{
    int n, x;
	cin >> n >> x;
    int a = n/2;
    for (int i = 1; i <= a; i++)
    {
        cout << x + i << " ";
        cout << x - i << " ";
    }
    if (n%2 == 0) cout << endl;
    else cout << x << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
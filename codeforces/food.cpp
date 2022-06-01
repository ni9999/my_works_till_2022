#include<iostream>
using namespace std;

void solve() 
{
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	x -= a;
	y -= b;
	if(x>0) c -= x;
	if(y>0) c -= y;

	if(c<0) cout << "NO" << endl;
	else cout << "YES" << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
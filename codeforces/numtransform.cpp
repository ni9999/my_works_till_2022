#include<iostream>
using namespace std;

void solve() 
{
	int x, y;
	cin >> x >> y;
	int a = 1, b = 0;
	if(y%x != 0) a = 0;
	else b = y/x;
	cout << a << " " << b << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
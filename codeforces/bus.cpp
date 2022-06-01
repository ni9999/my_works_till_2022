#include<iostream>
using namespace std;

int solve() 
{
	long long n;
	cin >> n;
	if(n < 4 || n%2 != 0) 
	{
		cout << -1 << endl;
		return 0;
	}

	long long x = n/6;
	long long y = x * 6;
	
	if(y != n) x++;
	
	cout << x << " " << n/4 << endl;
	
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
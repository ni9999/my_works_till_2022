#include<iostream>
using namespace std;

void solve() 
{
	int x, y, z;
    cin >> x >> y >> z;
    int t = z - y/x;
    if(t < 0) cout << 0 << endl;
    else cout << t << endl; 
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
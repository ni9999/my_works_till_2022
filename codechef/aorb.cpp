#include<iostream>
using namespace std;

void solve() 
{
    int x, y;
    cin >> x >> y;
    int a = 500, b = 1000;
    
    int way1 = (a - x * 2) + (b - (x + y) * 4);
    int way2 = (b - y * 4) + (a - (x + y) * 2);

    if(way1 > way2) cout << way1 << endl;
    else cout << way2 << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
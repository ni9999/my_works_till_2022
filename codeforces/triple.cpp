#include<iostream>
using namespace std;

void solve() 
{
	int n;
	cin >> n;
	int a[n+1];
    //initialize
    for (int i = 0; i < n+1; i++)
        a[i] = 0;

	int x;
	bool out = false;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a[x]++;
        if(a[x] > 2)
        {
            cout << x << endl;
            out = true;
            break;
        }
	}
	if(!out) cout << -1 << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve() 
{
	vector<int> a;
    int n, x, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    for (int i = n-1; i > 0; i--)
    {
        ans += a[i] - a[0];
    }
    
    cout << ans << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
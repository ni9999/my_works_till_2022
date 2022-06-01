#include<iostream>
#include<vector>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int a[n];
    vector<int> toswap;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] != i) toswap.push_back(a[i]); 
    }

    int ans = toswap[0] & toswap[1];
    for (int i = 2; i < toswap.size(); i++)
        ans = ans & toswap[i];
    
    cout << ans << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
#include<iostream>
using namespace std;

void solve() 
{
    int mod = 998244353;
    int n;
	cin >> n;
    if(n%2 == 1) cout << 0 << endl;
    else
    {
        long long ans = 1;
        for (int i = 1; i <= n/2; i++)
        {
            ans *= i * i;
            ans = ans % mod;
        }
        
        cout << ans << endl;
    } 
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
#include<iostream>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long ans = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'c' || s[i] == 'l' || s[i] == 'g' || s[i] == 'r')
            ans *= 2;
        ans %= 1000000007;
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
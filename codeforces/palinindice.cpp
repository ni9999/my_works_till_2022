#include<iostream>
using namespace std;

void solve() 
{
    int n, i, j, ans;
    string s;
    cin >> n >> s;
    
    if(n%2 == 0)
    {
        i = (n/2) - 1;
        ans = 2;
    } 
    else
    {
        i = n/2;
        ans = 1;
    }

    i--;
    j = n/2;

    for (; i >= 0; i--)
    {
        if(s[i] == s[j]) ans += 2;
        else break;
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
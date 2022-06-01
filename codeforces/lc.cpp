#include<iostream>
using namespace std;

void solve() 
{
	string s;
    cin >> s;
    int f = 0, l = 0;
    for (int i = 0; i < 3; i++)
    {
        f += s[i] - 48;
    }

    for (int i = 3; i < 6; i++)
    {
        l += s[i] - 48;
    }
    
    if(f == l) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
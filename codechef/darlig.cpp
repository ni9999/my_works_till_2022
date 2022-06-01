#include<iostream>
using namespace std;

void solve() 
{
	int n, k;
    cin >> n >> k;
    if(k == 0)
    {
        if(n%4 == 0) cout << "off" << endl;
        else cout << "on" << endl;        
    }
    else
    {
        if(n%4 == 0) cout << "on" << endl;
        else cout << "ambigous" << endl;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
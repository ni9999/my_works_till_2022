#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() 
{
	int n, m;
    cin >> n >> m;
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    sort(a.begin(), a.end());

    int l = a.size()-1;


    int prev_l = l-1;
    while(a[prev_l] == a[l] && prev_l > 0)
        prev_l--;


    int x = 2 * a[l];

    int d = (a[prev_l] - a[l]) % m;
    if(d < 0) d += m;

    int y = a[l] + a[prev_l] + d;

    if(x > y) cout << x << endl;
    else  cout << y << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
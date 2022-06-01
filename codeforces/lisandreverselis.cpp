#include<iostream>
#include<map>
using namespace std;

void solve() 
{
    int n, ans = 0;
    cin >> n;
    map<int, int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(a.find(x) == a.end())
        {
            a[x] = 1;
            ans++;
        } 

        else if (a[x] == 1)
        {
            a[x] ++;
            ans++;
        }
    }
    
    if(ans%2 == 1) ans ++; 
    ans /= 2;
    cout << ans << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
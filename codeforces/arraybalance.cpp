#include<iostream>
#include<cmath>
using namespace std;

void solve() 
{
    int n, sum = 0;
	cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(!(a[i] < b[i]))
        {
            int tmp = b[i];
            b[i] = a[i];
            a[i] = tmp;
        }
    }
    for (int i = 1; i < n; i++)
    {
        sum += abs(a[i] - a[i-1]);
        sum += abs(b[i] - b[i-1]);
    }
    cout << sum << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
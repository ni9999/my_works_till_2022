#include<iostream>
using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int a[n];

    int even = 0, odd = 0; 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]%2 == 0) even++;
        else odd++;
    }

    cout << min(even, odd) << endl;
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
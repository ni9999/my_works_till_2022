#include<iostream>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    float a[n];
    float add = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        add += a[i];
    }
        

    bool yes = false;
    for (int i = 0; i < n; i++)
    {
        float x = (add - a[i]) / (n - 1);

        if(x == a[i])
        {
            cout << "YES" << endl; 
            yes = true;
            break;
        }
    }
    
    if(!yes)
        cout << "NO" << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
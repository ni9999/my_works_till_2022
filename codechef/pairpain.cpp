#include<iostream>
using namespace std;

void solve() 
{
    int n, pairs = 0;
	cin >> n;
    int a[n];


    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1) pairs += n - i - 1; //for 1 our work is done
    }

    //for 2 work begins
    int map[n];
    int x = 0;     
    for (int i = 0; i < n; i++)
        map[i] = 0;
    
    for (int i = n-1; i >= 0; i--)
    {
        if(a[i] == 1 || a[i] == 2) x++;
        map[i] = x;
    }

    for (int i = 0; i < n-1; i++)
        if(a[i] == 2) pairs += map[i+1];
    
    cout << pairs << endl;  
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
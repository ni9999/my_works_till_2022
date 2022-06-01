#include<iostream>
using namespace std;

void solve() 
{
	int n;
    cin >> n;
    int a[n];
    int max1 = 0, max2 = 0;  
    int i1, i2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > max1)
        {
            max1 = a[i];
            i1 = i; 
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i != i1)
        {
            if(a[i] > max2) max2 = a[i];
        }
    }
    if(max1 == max2 + 1 || max1 == max2) 
        cout << "YES" << endl;
    else   
        cout << "NO" << endl;
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
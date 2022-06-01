#include<iostream>
using namespace std;

void solve() 
{
    int n;
	cin >> n;
    int A[n];
    int pairs = 0;
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(A[i] > 0) pos++;
        else if(A[i] < 0) neg++;
    }
    int x = 1;
    for (int i = pos; i > pos - 2; i--)
    {
        x *= i;
    }
    int y = 1;
    for (int i = neg; i > neg - 2; i--)
    {
        y *= i;
    }
    cout << (x + y)/2 << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
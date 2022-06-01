#include<iostream>
using namespace std;

void solve() 
{
	int N, X;
    cin >> N >> X;
    int A[N-1];
    int sum = 0;
    for (int i = 0; i < N-1; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    int min = N * X - sum;
    if(min > 0) cout << min << endl;
    else cout << 0 << endl; 
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
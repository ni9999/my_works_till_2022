#include<iostream>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string S[n];
    int st = 0, lt = 0; 
    for (int i = 0; i < n; i++)
    {
        cin >> S[i];
        if(S[i] == "START38") st++;
        else lt++;
    }

    cout << st << " " << lt << endl;
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
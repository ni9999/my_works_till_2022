#include<iostream>
using namespace std;

void solve() 
{
	string s;
    cin >> s;
    int index = (s[0] - 'a') * 25;
    if(s[1] > s[0]) index += s[1] - 'a';
    else index += s[1] - 'a' + 1;
    cout << index << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
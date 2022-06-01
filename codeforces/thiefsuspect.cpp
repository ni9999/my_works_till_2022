#include<iostream>
using namespace std;

void solve() 
{
	string s;
    cin >> s;
    int lastone = 0, firstzero = 0;

    int i;
    for (i = 0; i < s.size() && s[i] != '0'; i++)
    {
        if(s[i] == '1') lastone = i; 
    }

    if(s[i] == '0')
        firstzero = s.size() - i - 1;
    else firstzero = 0;

    cout << s.size() - lastone - firstzero << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
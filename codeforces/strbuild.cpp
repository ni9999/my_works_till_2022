#include<iostream>
using namespace std;

void solve() 
{
    string s;
    cin >> s;
    int x = 2;
    char c = 'x';
    for (int i = 0; i < s.size(); i++)
    {       
        if (s[i] == c) x++;
        else
        {
            if(x < 2) 
                break;
            x = 1;
            c = s[i]; 
        }
    }
    if(x > 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
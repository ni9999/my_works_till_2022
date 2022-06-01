#include<iostream>
using namespace std;

int solve() 
{
	int a, b;
    cin >> a >> b;
    if(a == 0) return 1;
    else return 2 * b + a + 1;
}

int main()
{
	int t;
	cin >> t;
    int s;
	while (t--)
		{
            s = solve();
            cout << s << endl;
        }
}
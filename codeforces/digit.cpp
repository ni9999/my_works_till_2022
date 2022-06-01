#include<iostream>
using namespace std;

int solve() 
{
    int n;
    cin >> n;
    string N = to_string(n);
    if(N.size() > 2)
    {
        int l = N[0] - '0';
        int x;
        for (int i = 0; i < N.size(); i++)
        {
            x = N[i] - '0';
            if(l > x) l = x;
        }
        return l;
    }

    else
        return N[N.size() - 1] - '0';
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		cout << solve() << endl;
}
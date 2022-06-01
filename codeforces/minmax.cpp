#include<iostream>
using namespace std;

int solve() 
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int i;
    for ( i = l1; i <= r1; i++)
    {
        if(i <= r2 && i >= l2) return i;
    }
    
    return l1+l2;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		cout << solve() << endl;
}
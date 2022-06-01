#include<iostream>
#include<cmath>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool ans = true;

    bool decreasing = true;
    
    int decrease = 0;
    int negative = 0;
    int middle = 0;

    if(a[0] < 0) negative++;
    
    for (int i = 0; i < n-1; i++)
    {
        if(abs(a[i]) >= abs(a[i+1]) && decreasing)
            {
                decrease++;

                if(abs(a[i]) == abs(a[i+1]))
                    middle++;
                else middle = 0;
            }
        else 
            decreasing = false;

        if(!decreasing && abs(a[i]) > abs(a[i+1]))
        {
            ans = false;
            break;
        }

        if(a[i+1] < 0) negative++;
    }

    int high = decrease + 1;
    int low = decrease - middle;

    if(!(negative <= high && negative >= low))
        ans = false;

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl; 
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
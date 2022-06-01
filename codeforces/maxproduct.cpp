#include <iostream>
using namespace std;

void solve()
{
    int n, x, y, maxtwo = 0, two = 0, tmp = 0, minus = 0;
    cin >> n;
    int a[n];
    x = n;
    y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            if (a[i] == 2 || a[i] == -2)
                two++;
            if (a[i] < 0)
                minus++;
            if (two > maxtwo)
            {
                if (minus % 2 == 0)
                {
                    maxtwo = two;
                    x = tmp;
                    y = n - 1 - i;
                }
                else if (minus > 2 && a[i] > 0 || a[tmp] == -1)
                {
                    x = tmp +1;
                    y = n - 1 - i;
                }
            }
        }
        else
        {
            tmp = i + 1;  // tmp is temporary value for x 
            two = 0;
            minus = 0;
        }
    }
    cout << x << " " << y << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
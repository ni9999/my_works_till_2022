// very cool problem

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    vector<int> a (n, -1);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
    }


    if(n % 2 == 1) cout << "NO" << endl;
    else
    {
        int duplicate = 0, tmp = 1;
        
        sort(a.begin(), a.end());
        
        for (int i = 0; i < n-1; i++)
        {
            if(a[i] == a[i+1]) tmp++;
            else
            {
                if(tmp > duplicate) duplicate = tmp;
                tmp = 1;
            }
        }
        
        if(tmp > duplicate) duplicate = tmp;

        if(duplicate > n/2) cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;

            int i, j;            
        
            for (i = 0, j = n/2; j < a.size(); i++, j++)
            {
                cout << a[i] << " ";
                cout << a[j] << " ";
            }
                
            cout << endl;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
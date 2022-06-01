#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;

	string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    vector<int> map;

    int tmp = 0;
    int min = 999999;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                tmp += abs(s[i][k] - s[j][k]);   
            }
            if(min > tmp) min = tmp;
            tmp = 0;

        } 
    }
    
    cout << min << endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
#include<iostream>
#include<map>
using namespace std;

void printShuffle(int start, int end)
{
    cout << end << " ";

    for(int i = start; i < end; i++)
        cout << i << " ";
}

void solve() 
{
    int n;
    cin >> n;
    int s[n];

    map<int, int> smap;

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
        smap[s[i]] ++;
    }
        
    int prev = 0;

    for(auto i = smap.begin(); i != smap.end(); i++)
    {
        if(i->second == 1) 
        {
            cout << -1 << endl;
            return ;
        }

        else
        {
            i->second += prev;
            prev = i->second;
        }
    }

    prev = 0;

    for(auto i = smap.begin(); i != smap.end(); i++)
    {
        printShuffle(prev+1, i->second);
        prev = i->second;
    }

    cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
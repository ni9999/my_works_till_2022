#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
        string s, c;
		cin >> s >> c;
        bool yes = false;
        for (int i = 0; i < s.length(); i++)
        {
            if(c[0] == s[i])
            {
                if(i %2 == 0)
                {
                    cout << "YES" << endl;
                    yes = true;
                    break;
                }
            }
        }

        if (!yes)
            cout << "NO" << endl;
        
	}
}
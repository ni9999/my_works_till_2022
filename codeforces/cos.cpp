#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
        int n;
        cin >> n;
        string s;
        cin >> s;
        int invite = 0;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i] == '0' && s[i+1] == '0')
                invite += 2;
            else if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' && i < n-2)
                invite ++;
            
        }
        cout << invite << endl;
	}
}
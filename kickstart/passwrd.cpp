#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int c = 1; c <= t; c++)
    {
        int n;
        string s;
        cin >> n >> s;

        int cond[4] = {0, 0, 0, 0};
        string condchar = "Aa1@";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                cond[0]++;
            else if (s[i] >= 'a' && s[i] <= 'z')
                cond[1]++;
            else if (s[i] >= '0' && s[i] <= '9')
                cond[2]++;
            else
                cond[3]++;
        }

        for (int i = 0; i < 4; i++)
        {
            if (cond[i] == 0)
                s.push_back(condchar[i]);
        }

        while (s.size() < 7)
            s.push_back('1');

        cout << "Case #" << c << ": " << s << endl;
    }
}
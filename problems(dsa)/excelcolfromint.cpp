#include <iostream>
#include <vector>
using namespace std;

string toStr(int x)
{
    char C[2];
    C[0] = 'A' + x - 1;
    C[1] = '\0';
    return C;
}

string convertTitle(int A)
{
    string title = "";
    for (int i = 0; A > 0; i++)
    {
        int x = A % 26;
        if (x == 0)
            title = toStr(26) + title;
        else
            title = toStr(A % 26) + title;
        A = A / 26;
        if (x == 0)
            A--;
    }
    return title;
}

int main()
{
    cout << convertTitle(1000) << endl;
    cout << convertTitle(943566) << endl;
    cout << convertTitle(52) << endl;
}

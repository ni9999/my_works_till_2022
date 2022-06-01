#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

string solve(string A)
{
    string B = "";
    string x = "";

    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] != ' ')
            x.push_back(A[i]);
        else
        {
            if (x.length() > 0)
            {
                B = " " + x + B;
                x = "";
            }
        }
    }
    if (x.length() > 0)
        B = x + B;
    else B.erase(B.begin());
    return B;
}

int main()
{
    // cout << solve("  j  ") << endl;
    cout << solve("       fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq                 ");
}

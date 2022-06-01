#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && c <= b) cout << "Yes";
    else if (b <= c && a <= b) cout << "Yes";
    else cout << "No";

    return 0;
}
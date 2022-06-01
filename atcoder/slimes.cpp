#include<iostream>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    long long x;
    x = a;
    int i = 0;
    for (i = 0; b > x; i++)
        x *= k;
    cout << i << endl;
    return 0;
}
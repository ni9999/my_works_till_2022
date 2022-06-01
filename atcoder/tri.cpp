#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double x, y;
    x = cos(atan(b/a));
    y = sin(atan(b/a));
    cout << x << " " << y << endl;
    cout << atan(b/a);
    return 0;
}
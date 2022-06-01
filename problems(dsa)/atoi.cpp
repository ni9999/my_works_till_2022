#include<iostream>
#include<vector>
#include<climits>
#include <cmath>
using namespace std;

int cToi(char c)
{
    return c - 48;
}

int solve(string A)
{
    string X = "";


    bool ansp = true; // is ans positive = true


    int i = 0;

    while(A[i] == ' ') i++;   //work for first spaces removal

    // for + & - removal
    if(A[i] == '+') i++;

    else if(A[i] == '-') {
        i++;
        ansp = false;
    }
    
    
    // pushing only number value
    for (; i < A.size(); i++)
    {
        if (A[i] < 48 || A[i] > 57 )
            break;
        X.push_back(A[i]);
    }
    
    double ans = 0;
    for (int i = 0; i < X.size(); i++)
        ans += cToi(X[i]) * pow(10, X.size() - i - 1); 
    

    if(!ansp) ans *= -1;


    if (ans > INT_MAX) return INT_MAX;
    else if (ans < INT_MIN) return INT_MIN;
    return ans;
}

int main()
{

    cout << solve("-54332872018247709407 4 54") << endl;
}

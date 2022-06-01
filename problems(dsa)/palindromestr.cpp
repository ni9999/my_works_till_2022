#include<iostream>
#include<string>
using namespace std;
string delChar(string A)
{
    string B;
    int x = A.size();
    cout << x << endl;
    for (int i = 0; i < x; i++)
    {
        if((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122) || (A[i] >=48 && A[i] <= 57))
            B.push_back(A[i]);
    }
    return B;
}

string toLower(string A)
{
    for (int i = 0; i < A.size(); i++)
    {
        if(A[i] >= 65 && A[i] <= 90)
            A[i] += 32;
    }
    return A;
}

string reverse(string A)
{
    string B = A;
    for (int i = A.size()-1, j = 0; i >=0 ; i--, j++)
    {
        B[i] = A[j];
    }
    return B;
}

int main()
{
    string A = "A man, a plan, a canal: Panama";
    A = delChar(A);
    A = toLower(A);
    if(A == reverse(A)) cout << 1;
    else cout << 0;
}
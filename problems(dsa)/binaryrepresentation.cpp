#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    int A = 453;
    if(A == 0) return 0;
    vector<int> B;
    for (; A > 0; A /= 2)
    {
        B.push_back(A%2);
    }
    string C = "";
    for (int i = B.size() - 1; i >= 0; i--)
    {
        if(B[i] == 1)
            C = C + "1";
        else
            C = C + "0";
    }

    char D[B.size() + 1]; 
    // +1 for '\0';
    // what does char a[50] means -->    char *a;   malloc(50 * sizeof('c'));      

    for (int i = B.size() - 1; i >= 0; i--)
    {
        if(B[i] == 1)
            D[B.size() - 1 - i] = '1';
        else
            D[B.size() - 1 - i] = '0';
    }

    D[B.size()] = '\0';

    cout << D;

}

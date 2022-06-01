#include<iostream>
#include<string>
using namespace std;

int charToNumber(char a)
{
    return a - 'A' + 1; 
}

int titleToNumber(string A)
{
    int num = 0;
    for (int i = 0; i < A.length(); i++)
    {
        num += charToNumber(A[i]);
        if(i+1 < A.length()) num *= 26;
    }
    return num;
}

int main()
{
    cout << titleToNumber("AA") << endl;
    cout << titleToNumber("B") << endl;
    cout << titleToNumber("CA") << endl;
    cout << titleToNumber("ALL") << endl;
}
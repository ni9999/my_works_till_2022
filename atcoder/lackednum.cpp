#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[] = {0,0,0,0,0,0,0,0,0,0};
    for (int i = 0; i < 9; i++)
    {
        arr[s[i] - '0'] = 1; 
    }
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] == 0) cout << i << endl;
    }
    return 0;
}
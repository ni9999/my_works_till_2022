#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(int x)
{
    string X1 = to_string(x);
    string X2 = X1;
    reverse(X2.begin(), X2.end());
    if(X1 == X2) return 1;
    return 0;
}

int solve(int A, int B, int C) {
    vector<int> Pal;
    for(int i = A; i <= B; i++)
        if(isPalindrome(i)) Pal.push_back(i);

    int npal;
    int npalhigh = 0;
    
    for (int i = 0; i < Pal.size(); i++)
    {
        npal = 0;

        for (int j = i; j < Pal.size(); j++)
            if(Pal[j] - Pal[i] <= C) npal++;
        
        if(npal > npalhigh)
            npalhigh = npal; 
    }
    
    return npalhigh;
}

int main()
{ 
    cout << solve(1, 110, 10);
}

#include<iostream>
using namespace std;

int solve(string A)
{
    int open = 0, pairs = 0;


    for(int i = 0 ; i < A.size(); i++)
    {
        if(A[i] == '(') open++;
        else if (A[i] == ')' && open > 0)
        {
            open--;
            pairs++;
        }
    }
    return A.size() - pairs * 2;
}




int main()
{
    cout << solve(")(()((((()))))))()()(()(()(())()()()))())())()))()(())))))(()((((((((()()((())())(((((()(()())((()))))((()()())((())))((()()))()((()((())))))") << endl;
}
#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;

int kSum(vector<int> &A, int k)
{
    unordered_map<int, int> nk;
    
    for(int i = 0; i < A.size(); i++)
    {
        if(nk.find(A[i]) != nk.end()) return 1;
        nk[k - A[i]] = A[i];        
    }
        

    return 0;
}

int main()
{
    vector<int> x = {10, 15, 3};
    cout << kSum(x, 18) << endl; // kSum({10, 15, 3}, 18) will not work. have to declare variable and then pass it
    cout << kSum(x, 17) << endl;
}
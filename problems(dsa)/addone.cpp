#include<iostream>
#include<vector>
using std::vector;
vector<int> addone(vector <int> A);
using namespace std;
int main()
{
    vector<int> A;
    A = {1, 9,9};
    A = addone(A);
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i];
    }
    
}

vector <int> addone(vector <int> A)
{
    int x = A.size() - 1;
    while(x >= 0 && A[x] == 9)
    {
        A[x] = 0;
        x--;
    }
    if (x >= 0) A[x]++;
    else
    {
        A.insert(A.begin(), 1);
        return A;
    }

    while(A[0] == 0) 
    {
        A.erase(A.begin());
    }
    return A;   
}
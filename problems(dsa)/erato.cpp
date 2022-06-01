#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    int A = 10;
    vector<bool> B(A + 1, true);
    
    for(int i = 2; i <= sqrt(A); i++)
    {
        if(B[i])
        {
            for(int j = 2; i*j < B.size(); j++)
                B[i*j] = false;
        }
    }
    vector<int> C;
    for(int i = 2; i < B.size(); i++)
    {
        if(B[i])
            C.push_back(i);
    }
    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " " ;
    }
}
   
   
   

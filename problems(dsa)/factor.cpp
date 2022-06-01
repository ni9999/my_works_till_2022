#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<int> factor(int A)
{
    if(A == 1) return {1};
    vector<int> f;
    f = {1, A};
    for (int i = 2; i <= sqrt(A); i++)
    {
        if(A%i == 0)
        {
            
            if(i == A/i)
                f.insert(f.begin() + f.size()/2, i);
            else
            {
                f.insert(f.begin() + f.size()/2, i);
                f.insert(f.begin() + f.size()/2 + 1, A/i);
            }
        }
    }
    
    return f;
}

int main()
{

    factor(45);
}

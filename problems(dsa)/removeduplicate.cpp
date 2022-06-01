#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> A) {
    for(int i = 0; i < A.size()-1; i++)
    {
        if(A[i] == A[i+1])
        {
            A.erase(A.begin() + i);
            i--;
        }
    }

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " " ;
    }
    
    return A[A.size() - 1];
}


int main()
{

    cout << removeDuplicates({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}) << endl;
    cout << removeDuplicates({0});
    
}


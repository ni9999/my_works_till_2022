#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int closest3s(vector<int> A, int B)
{
    sort(A.begin(), A.end());

    int sum = 0;
    int diff = 0;
    int ans = A[0] + A[1] + A[2];


    for(int fp = 0; fp < A.size(); fp++) //fp -> fixed pointer
    {
        int lp = fp+1, rp = A.size() - 1;
        for( ; lp < A.size(); lp++)
        {
            for( ; rp > lp; rp--)
            {
                sum = A[fp] + A[lp] + A[rp];
                diff = abs(B - sum);

                if(diff < abs(B - ans)) ans = sum;

                if(diff == 0) return B;
                else if(sum < B) break;
            }
        }
    }

    return ans;
}

int main()
{
   // cout << closest3s({-1,0,1,4}, 0) << endl;
    cout << closest3s({ 5, -2, -1, -10, 10}, 5) << endl;

}

#include<iostream>
using namespace std;
// transform the problem into two parts:
//     our goal here is to get a pattern like 048 1357 26 
//         here are three lines, represented by B
//             each line has two gap
//     now our goal is replacing ans[i] by that previous pattern index of A;

string convert(string A, int B)
{
    string ans = A;


    int ans_i = 0;
    int A_i = 0; //index of A in ans
    int gap1 = 2 * (B-1);
    int gap2 = 0;
    int gap; 
    if(gap1 == 0) gap1 = 1;

    for (int i = 0; i < B; i++)
    {
        gap = 1;
        A_i = i;        
        
        while(A_i < A.size())
        {
            if(gap == 1)
            {
                if(gap1 > 0) 
                {
                    ans[ans_i] = A[A_i];
                    ans_i ++;
                }
                gap = 2;
                A_i += gap1;
            }

            else
            {
                if(gap2 > 0) 
                {
                    ans[ans_i] = A[A_i];
                    ans_i ++;
                }
                gap = 1;
                A_i += gap2;
            }
        }


        gap1 -= 2;
        gap2 += 2;
    }

    return ans;
}

int main()
{
   // cout << convert("zigzagstring", 4) << endl; 
   // cout << convert("PAYPALISHIRING", 3) << endl;
    cout << convert("asdfasdfB",1) << endl;
}
#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector <int> A, int B, int l, int r)
{
    int m;
    while (l <= r)
    {
        m = (l+r)/2;
        if(A[m] < B) l = m + 1;
        else if (A[m] > B) r = m - 1;
        else return m;
    }
    return -1;
}

int rotateSearch(vector <int> A, int B)
{
    int l = 0, r = A.size() - 1, m;
    while (l <= r)
    {
        m = (l+r)/2;
        if(A[l] >= A[0] && A[l] <= A[m]) l = m + 1;
        else if(A[r] <= A[A.size() - 1] && A[m] <= A[r]) r = m - 1;
        else break;
    }
    if(A[m] > A[m+1]) m++;
   // cout << m << endl;
    int x = binSearch(A, B, 0, m-1);
    if(x != -1) return x;
    else x = binSearch(A, B, m, A.size() - 1);
    return x;
}


int main()
{
    vector<int> A, B, C;
    A = {13,15,17,0,2,4,5};
    B = {4,5,6,7,0,1,2,3};    
    C = {194, 195, 196, 197, 198, 199, 201, 203, 204, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 30, 31, 32, 33, 34, 35, 36, 37, 39, 40, 42, 43, 44, 45, 47, 48, 49, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 65, 66, 68, 69, 70, 71, 73, 74, 76, 77, 79, 80, 81, 82, 83, 84, 86, 87, 88, 89, 91, 92, 93, 94, 95, 97, 98, 99, 101, 103, 104, 105, 106, 107, 108, 109, 110, 113, 114, 115, 117, 118, 120, 121, 122, 123, 124, 127, 128, 130, 131, 133, 134, 135, 136, 137, 139, 140, 141, 142, 143, 144, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 158, 159, 160, 161, 162, 163, 164, 166, 167, 169, 170, 171, 172, 174, 175, 177, 178, 179, 181, 182, 184, 185, 187, 189, 190, 192, 193};
    cout << rotateSearch(A, 4) << endl;
    cout << rotateSearch(B, 4) << endl;
    cout << rotateSearch(C, 1) << endl;

}

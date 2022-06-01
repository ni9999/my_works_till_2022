#include<iostream>
#include<vector>

//functions
void merge(vector<int> A, int p, int q, int r);
void mergesort(vector<int> A, int l, int r);
int noble(vector <int> A);


using namespace std;
using std::vector;

int main()
{
    vector<int> A;
    A = {5, 4, 3, 2, 1, 9};
    cout << noble(A);
}

int noble (vector<int> A)
{
    int end = A.size() - 1;
    mergesort(A, 0, end);
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << endl;
    }
    
    for (int i = 0; i < A.size(); i++)
    {
        if(A.size() - i - 1 == A[i] && A[i+1] > A[i])
            return 1;
    }
    return -1;
}

void mergesort(vector<int> A, int l, int r)
{
    if(l < r)
    {
        int m = l + (r-l)/2;
        mergesort(A, l, m);
        mergesort(A, m+1, r);
        merge(A, l, m, r);
    }
}

void merge(vector<int> A, int p, int q, int r)
{
    int l = q-p+1;
    int rr = r-q;

    int L[l];
    int R[rr];

    for (int i = p; i < l; i++)
        L[i] = A[p+i];
    for (int j = q; j < rr; j++)
        R[j] = A[q+j];

    int i,j,k;
    i = 0;
    j = 0;
    k = p;

    while(i < l && j < rr)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
            k++;
        }
        else
        {
            A[k] = R[j];
            j++;
            k++;
        }
    }

    while(i < l)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < rr)
    {
        A[k] = R[j];
        j++;
        k++;
    }
    
}
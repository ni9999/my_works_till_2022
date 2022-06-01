void merge(vector<int> &A, vector<int> &B) {

    vector <int> C(A.size() + B.size());
    int i = 0, j = 0, k = 0;
    while(i < A.size() && j < B.size())
    {
        if(A[i] < B[j]) 
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }
    while(i < A.size())
    {
        C[k] = A[i];
        i++;
        k++;
    }
    while(i < B.size())
    {
        C[k] = B[j];
        j++;
        k++;
    }
    A = C;
}

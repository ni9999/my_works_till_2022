#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int> A) {
    int z=0, o=0, t=0;
    
    for (int i=0;i<A.size();i++)
    {
	    if(A[i]==0) z++;
    	if(A[i]==1) o++;
    	if(A[i]==2) t++;
    }

    int i = 0, j = 0, k = 0, index = 0;

    for (;i<z;i++) A[index+i] = 0;
    index += i;
    for (;j<o;j++) A[index+j] = 1;
    index += j;
    for (;k<t;k++) A[index+k] = 2;

    for ( i = 0; i < A.size(); i++)
    {
        cout<< A[i] << endl;
    }
    
}

int main()
{
    sortColors({2,0,0,1,0,0,2,2,1,1,0,0,1,0,2,1,1,0,1,0,1,2,2,2,0,0,1,0,2,1,1,2,1,2,2,1,0,2,2,1,1,1,0,1,0,1,0,2,1,2,0,2,0,1,1,0,2,2,1,2,0,2,1,1,1,2,0,1,0,2,2,1,0,0,1,0,1,0,0,0,1,2,1,1,0,2,1,2,0,0,0,2,2,2,2,0,0,0,1,1,0,2,1,2,2,2,1,2,2,0,1,0,1,2,1,1,0,1,2,0,1,0,2,2,1,2,1,0,2,2,1,1,0,2,1,2});
}

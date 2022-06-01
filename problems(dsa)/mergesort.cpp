#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &A, int p, int q, int r);
void mergeDevide(vector<int> &A, int startindex, int endindex);

int main()
{
	vector<int> A;
	A = {5, 4, 3, 2, 1, 9};
	mergeDevide(A, 0, A.size() - 1);
	for (int i = 0; i < A.size(); i++)
	{
		cout << A[i];
	}
	cout << endl;
}

// we have to always pass the vector by address otherwise it isn't gonna work
void mergeDevide(vector<int> &A, int startindex, int endindex)
{
	if (startindex < endindex)
	{
		int middleindex = startindex + (endindex - startindex) / 2;
		mergeDevide(A, startindex, middleindex);
		mergeDevide(A, middleindex + 1, endindex);
		merge(A, startindex, middleindex, endindex);
	}

	
}

void merge(vector<int> &A, int p, int q, int r)
{
	int m = q - p + 1, n = r - q;
	
	int leftarr[m];
	int rightarr[n];
	for (int i = 0; i < m; i++)
		leftarr[i] = A[p + i];

	for (int i = 0; i < n; i++)
		rightarr[i] = A[q + i + 1];
	
	
	int i = 0, j = 0, index = p;
	
	while (i < m && j < n)
	{
		if (leftarr[i] <= rightarr[j])
		{
			A[index] = leftarr[i];
			i++;
		}
		else
		{
			A[index] = rightarr[j];
			j++;
		}
		index++;
	}
	while(i < m)
	{
		A[index] = leftarr[i];
		i++;
		index++;
	}
	while(j < n)
	{
		A[index] = rightarr[j];
		j++;
		index++;
	}

}

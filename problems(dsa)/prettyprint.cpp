#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> prettyprint(int A)
{
    int n = 2 * A - 1;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    int start = 0, end = n, value = A;
    for (int value = A; value >= 1; value--)
    {
        for (int i = start; i < end; i++)
        {
            if (i == start || i == end - 1)
            {
                for (int j = start; j < end; j++)
                    arr[i][j] = value;
            }
            else
            {
                arr[i][start] = value;
                arr[i][end - 1] = value;
            }
        }

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return arr;
}

int main()
{
    prettyprint(4);
    prettyprint(9);
}

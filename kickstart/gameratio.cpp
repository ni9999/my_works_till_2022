#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int c = 1; c <= t; c++)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int sum = (n * (n + 1)) / 2;

        if (sum % (x + y) == 0)
        {
            cout << "Case #" << c << ": POSSIBLE" << endl;
            int asum = (sum / (x + y)) * x;

            vector<int> elements;

            while (asum != 0)
            {
                if (n <= asum)
                {
                    asum -= n;
                    elements.insert(elements.begin(), n);
                    n--;
                }

                else
                {
                    elements.insert(elements.begin(), asum);
                    asum = 0;
                }
            }

            cout << elements.size() << endl;

            for (int i = 0; i < elements.size(); i++)
                cout << elements[i] << " ";
            cout << endl;
            
        }

        else
            cout << "Case #" << c << ": IMPOSSIBLE" << endl;
    }
}
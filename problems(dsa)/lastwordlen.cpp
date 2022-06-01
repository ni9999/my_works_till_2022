#include <iostream>
using namespace std;
// the idea is start counting starting from every space. we will get wordlength + 1 number this way

int solve(string A)
{
    int i = 0;
    int word = 0;
    int x = 1; // for the first element we won't get any space to count
    while (A[i] != '\0')
    {
        if (A[i] == ' ')
        {
            if (x > 1)
                word = x - 1; // to deal with tests which has several spaces in last
            x = 0;
        }
        i++;
        x++;
    }
    if (x > 1)
        word = x - 1;
    return word;
}

int main()
{

    cout << solve("asdfasdf   asd    asdfasdf ") << endl;
}

#include <iostream>
#include <math.h>
using namespace std;
int position(int A, int x)
{
    return (A % (int)pow(10, x)) / (int)pow(10, x - 1);
}

int intlen(int x) //works if x > 0
{
    int y = 1;
    int i = 1;
    for (; x / y >= 10; i++)
        y *= 10;
    return i;
}

int isPalindrome(int A)
{
    if (A >= 0 && A <= 9)
        return 1;
    if (A < 0)
        return 0;

    int reverse = position(A, 1);
    int l = intlen(A);

    for (int i = 2; i <= l; i++)
    {
        
        reverse *= 10;
        reverse += position(A, i);
        if (A == reverse)
            return 1;
    }
    
    return 0;
}

int main()
{
    cout << isPalindrome(1212);
    cout << isPalindrome(12321);
    cout << isPalindrome(-12321);
    cout << isPalindrome(0);
    cout << isPalindrome(100000000);
    cout << isPalindrome(100);
    cout << isPalindrome(1000000005);
    cout << isPalindrome(6);
    cout << isPalindrome(100000001);
    
}
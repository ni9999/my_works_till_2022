#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int colorful(int A) {
    unordered_map<int, int> products;
    string a = to_string(A);
    
    for(int i = a.size(); i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            int product = 1;
            for(int k = j; k <=j + a.size() - i; k++)
                product *= a[k] - 48;
            
            if(products.find(product) == products.end())
                products.insert({product, product});
            else return 0;
        }
    }

    return 1;
}

int main()
{
    cout << colorful(12); 
}

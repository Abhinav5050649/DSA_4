#include "bits/stdc++.h"
using namespace std;

int n_fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else 
        return n_fib(n - 2) + n_fib(n - 1);
}

int main()
{
    cout << n_fib(6) << endl;
    return 0;
}
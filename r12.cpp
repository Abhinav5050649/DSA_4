#include "bits/stdc++.h"
using namespace std;

long long fa[31];

void init_fa()
{
    fa[0] = 1, fa[1] = 1;
    for (long long i = 2; i <= 30; i++)
    {
        fa[i] = i * fa[i - 1];
    }
}

long long factorial(long long n)
{
        return fa[n];
}

int main()
{
    init_fa();
    long long fact = factorial(20);
    cout << fact << endl;
    return 0;    
}
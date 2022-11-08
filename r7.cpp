#include "bits/stdc++.h"
using namespace std;

int PrintS(int ind, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
            return 1;
        else
            return 0;
    }

    s += arr[ind];
    int l = PrintS(ind + 1, s, sum, arr, n);

    s -= arr[ind];
    int r = PrintS(ind + 1, s, sum, arr, n);

    return l + r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int sum = 2, n = 3, s = 0;
    cout << PrintS(0, 0, sum, arr, n) << endl;

    return 0;
}
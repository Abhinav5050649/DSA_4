#include "bits/stdc++.h"
using namespace std;

void print_seq(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind >= n)
    {
        
        if(ds.size() == 0)
            cout << "{}" << endl;
        else
        {
            for (auto it = ds.begin(); it != ds.end(); it++)
                cout << *it << " ";
            cout << endl;
        }
        return;
    }
    
    ds.push_back(arr[ind]);
    print_seq(ind + 1, ds, arr, n);
    ds.pop_back();
    print_seq(ind + 1, ds, arr, n);
}

int main()
{
    int arr[] = {3, 1, 2};
    vector<int> store;
    print_seq(0, store, arr, 3);

    return 0;
}
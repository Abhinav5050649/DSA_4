#include "bits/stdc++.h"
using namespace std;

void PrintS(int ind, vector<int> &ds, int arr[], int n)
{
	if (ind >= n)
	{
		if (ds.size() == 0)
			cout << "{}\n";
		else
		{
			for (auto it = ds.begin(); it != ds.end(); it++)
				cout << *it << " ";
			cout << endl;
		}
		return;
	}

	ds.push_back(arr[ind]);
	PrintS(ind + 1, ds, arr, n);
	ds.pop_back();
	PrintS(ind + 1, ds, arr, n);
}

int main()
{
	int arr[] = {3, 1, 2};
	int n = 3, ind = 0;
	vector<int> ds;
	PrintS(ind, ds, arr, n);

	return 0;
}
#include "bits/stdc++.h"
using namespace std;

void recur_sub(vector<int> &nums, vector<int> &ds, int ind, int n)
{
	if (ind == n)
	{
		for (auto it : ds)
			cout << it << " ";
		cout << endl;
		
		return;	
	}

	ds.push_back(nums[ind]);
	recur_sub(nums, ds, ind + 1, n);
	ds.pop_back();
	recur_sub(nums, ds, ind + 1, n);
}

int main(int argc, char* argv[])
{
	vector<int> nums = {2,1,3};
	vector<int> ds;
	recur_sub(nums, ds, 0, 3);
	return 0;
}
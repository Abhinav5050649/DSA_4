#include "bits/stdc++.h"
using namespace std;

void printSol(int n)
{
	if (n == 1)
	{	
		cout << 1 << endl;
	}
	else
	{
		cout << n << " ";
		printSol(n - 1);
	}
}

int main()
{
	int n = 0; cin >> n;
	printSol(n);

	return 0;
}

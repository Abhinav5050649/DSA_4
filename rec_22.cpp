#include "bits/stdc++.h"
using namespace std;

void printSol(int i, int n)
{
	if (i == n)
	{	
		cout << n << endl;
		return;
	}
	else
	{
		cout << i << ' ';
		return printSol(i+1, n);
	}
}

int main()
{
	cout << "Enter a number: ";
	int n; cin >> n;
	
	printSol(1, n);
	return 0;
}

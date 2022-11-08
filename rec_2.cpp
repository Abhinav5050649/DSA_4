#include "bits/stdc++.h"
using namespace std;

void printName(string name, int i)
{
	if (i == 1)
	{
		cout << name << endl;
		return;
	}
	else
	{
		cout << name << endl;
		return printName(name, i-1);
	}
}

int main()
{
	string s;
	cin >> s;
	
	printName(s, 5);
	
	return 0;
}


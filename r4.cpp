#include "bits/stdc++.h"
using namespace std;

// void Arr_Reversal(int arr[], int i, int n)
// {
//     if (i >= n/2)
//         return;
//     else
//     {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//         return Arr_Reversal(arr, i + 1, n);
//     }
// }

bool is_pal(string s, int i, int n)
{
    if (i >= n / 2)
    {
        if (s[i] == s[n - i - 1])
            return true;
        else
            return false;
    }
    else
    {
        if (s[i] == s[n - i - 1])
            return is_pal(s, i + 1, n);
        else
            return false;
    }
}

int main()
{
    string s; cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int n = s.length();

    cout << "String is " << bool(is_pal(s, 0, n)) << endl;
    return 0;
}
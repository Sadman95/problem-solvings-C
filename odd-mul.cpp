#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mul = 1;
    cin >> n;

    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (i % 2 != 0)
            mul *= ar[i];
    }

    cout << mul << "\n";

    return 0;
}
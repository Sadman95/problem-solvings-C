#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;

    vector<int> ar1(n1);

    for (int i = 0; i < n1; i++)
    {
        cin >> ar1[i];
    }

    cin >> n2;

    vector<int> ar2(n2);

    for (int i = 0; i < n2; i++)
    {
        cin >> ar2[i];
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (ar1[i] != ar2[j])
                continue;
            else
                cout << ar1[i] << " ";
        }
    }

    return 0;
}
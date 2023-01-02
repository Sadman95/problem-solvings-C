#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] == 'z')
            s[i] = 'a' - 1;
        if (i % 2 == 0)
        {
            s[i] += 1;
        }
    }

    cout << s << "\n";
    return 0;
}
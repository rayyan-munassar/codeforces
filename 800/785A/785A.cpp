#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair

void solve()
{
    int n;

    cin >> n;

    int res = 0;
    for (int i = 0; i < n; i++)
    {

        string s;

        getline(cin, s);

        if (s[0] == 'T')
        {
            res += 4;
        }
        else if (s[0] == 'C')
        {
            res += 6;
        }
        else if (s[0] == 'O')
        {
            res += 8;
        }
        else if (s[0] == 'D')
        {
            res += 12;
        }
        else
        {
            res += 20;
        }
    }

    cout << res << endl;
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t; // Uncomment if the problem has multiple testcases
    while (t--)
    {
        solve();
    }
    return 0;
}
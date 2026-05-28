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

    if (n == 1)
    {
        cout << "I hate it";
        return;
    }

    string res = "I hate";

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            res += " that I love";
        }
        else
        {
            res += " that I hate";
        }
    }

    res.push_back(' ');
    res.push_back('i');
    res.push_back('t');

    cout << res << endl;
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t; // Comment this out if the problem has only 1 testcase
    while (t--)
    {
        solve();
    }
    return 0;
}
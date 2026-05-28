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
    string text;
    cin >> n >> text;

    uint32_t panagram = 0;

    for (char c : text)
    {

        c = tolower(c);

        panagram |= 1u << (c - 'a');
    }

    if (panagram == ((1u << 26) - 1u))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
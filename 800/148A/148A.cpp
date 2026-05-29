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
    int k, l, m, n, d;

    cin >> k >> l >> m >> n >> d;

    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
        return;
    }

    int harmed_dragons = 0;

    for (int i = 1; i <= d; i++)
    {

        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            harmed_dragons++;
    }

    cout << harmed_dragons << endl;
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
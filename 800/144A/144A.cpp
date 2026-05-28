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

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mx = 0;
    int mn = 0;

    for (int i = 0; i < a.size(); i++)
    {

        if (a[i] > a[mx])
            mx = i;
        if (a[i] <= a[mn])
            mn = i;
    }

    int ans = mx + (n - 1 - mn);

    if (mx > mn)
        ans--;

    cout << ans << '\n';
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
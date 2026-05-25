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
    int n, h;

    cin >> n >> h;
    int min_street_width = 0;
    for (int i = 0; i < n; i++)
    {
        int a;

        cin >> a;

        if (a <= h)
            min_street_width++;
        else
            min_street_width += 2;
    }

    cout << min_street_width << end;
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
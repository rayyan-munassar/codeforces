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

    int num_rooms = 0;
    for (int i = 0; i < n; i++)
    {

        int p, q;

        cin >> p >> q;

        if (p + 2 <= q)
            num_rooms++;
    }

    cout << num_rooms << endl;
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
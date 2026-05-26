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

    for (int i = 0; i < n; i++)
    {

        bool is_hard;

        cin >> is_hard;

        if (is_hard)
        {
            cout << "HARD" << endl;
            return;
        }
    }

    cout << "EASY" << endl;
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
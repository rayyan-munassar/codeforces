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

    int num_groups = 0;

    string magnets;

    string first_pair;

    cin >> first_pair;

    magnets += first_pair;
    num_groups++;

    for (int i = 1; i < n; i++)
    {

        string magnet_pair;

        cin >> magnet_pair;

        if (magnets[magnets.size() - 1] != magnet_pair[0])
        {
            magnets += magnet_pair;
        }
        else
        {
            num_groups++;
            magnets += magnet_pair;
        }
    }

    cout << num_groups << endl;
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
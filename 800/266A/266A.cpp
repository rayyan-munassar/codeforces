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

    string stones;

    cin >> n >> stones;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int removed_stones = 0;

    for (int i = 0; i < n; i++)
    {

        if (i == n - 1)
        {

            break;
        }

        if (stones[i] == stones[i + 1])
        {
            removed_stones++;
        }
    }

    cout << removed_stones << endl;
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
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

    int minmum_capacity = 0;
    int current_capacity = 0;

    for (int i = 0; i < n; i++)
    {

        int a, b;

        cin >> a >> b;

        current_capacity += (b - a);

        if (current_capacity > minmum_capacity)
        {
            minmum_capacity = current_capacity;
        }
    }

    cout << minmum_capacity << endl;
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
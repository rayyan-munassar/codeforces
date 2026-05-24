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

    int n, k;

    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int last_digit = n % 10;
        if (last_digit == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }

    cout << n << endl;
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
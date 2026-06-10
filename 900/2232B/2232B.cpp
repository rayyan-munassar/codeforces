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

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    vector<ll> ans;
    ans.pb(a[0]);
    ll curSum = a[0];

    for (int i = 1; i < n; i++)
    {

        curSum += a[i];

        ans.pb(min(ans[i - 1], (ll)curSum / (i + 1)));
    }

    for (ll ele : ans)
    {
        cout << ele << " ";
    }

    cout << endl;
}

int main()
{
    fast_io;
    int t = 1;
    cin >> t; // Uncomment if the problem has multiple testcases
    while (t--)
    {
        solve();
    }
    return 0;
}
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

    set<int> levels;

    int p_x;
    cin >> p_x;
    for (int i = 0; i < p_x; i++)
    {

        int a;
        cin >> a;

        levels.insert(a);
    }

    int p_y;
    cin >> p_y;

    for (int i = 0; i < p_y; i++)
    {
        int a;
        cin >> a;

        levels.insert(a);
    }

    if (levels.size() == n)
        cout << "I become the guy" << '\n';
    else
        cout << "Oh, my keyboard!"
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
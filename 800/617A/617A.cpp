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

    int x;

    cin >> x;

    int steps = 0;
    int elephant_pos = 0;
    while (elephant_pos != x)
    {

        if (elephant_pos + 5 <= x)
        {
            elephant_pos += 5;
            steps++;
        }
        else if (elephant_pos + 4 <= x)
        {
            elephant_pos += 4;
            steps++;
        }
        else if (elephant_pos + 3 <= x)
        {
            elephant_pos += 3;
            steps++;
        }
        else if (elephant_pos + 2 <= x)
        {
            elephant_pos += 2;
            steps++;
        }
        else
        {
            elephant_pos += 1;
            steps++;
        }
    }

    cout << steps << endl;
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
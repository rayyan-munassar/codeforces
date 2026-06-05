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
    int n, m;

    cin >> n >> m;

    bool insertLast = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (i % 2 == 0)
            {
                cout << '#';
            }
            else
            {
                if (insertLast && j == m - 1)
                {

                    cout << '#';
                }
                else if (!insertLast && j == 0)
                {

                    cout << '#';
                }
                else
                {
                    cout << '.';
                }
            }
        }

        cout << endl;
        if (i % 2 != 0)
        {

            insertLast = !insertLast;
        }
    }
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t; // Uncomment if the problem has multiple testcases
    while (t--)
    {
        solve();
    }
    return 0;
}
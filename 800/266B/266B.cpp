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

    int n, t;
    string s;
    cin >> n >> t >> s;

    if (n == 1)
    {
        cout << s << endl;
        return;
    }

    while (t > 0)
    {

        for (int i = 0; i < n; i++)

        {

            if (i == n - 1)
                break;

            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char temp = s[i];

                s[i] = s[i + 1];
                s[i + 1] = temp;
                i++;
            }
        }

        t--;
    }

    cout << s << endl;
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
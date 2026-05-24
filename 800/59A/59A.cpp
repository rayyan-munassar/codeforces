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

    string word;

    cin >> word;

    int lower_case_count = 0;
    int upper_case_count = 0;

    for (char c : word)
    {

        if (c >= 'a' && c <= 'z')
        {
            lower_case_count++;
        }
        else
        {
            upper_case_count++;
        }
    }

    string res;
    if (lower_case_count >= upper_case_count)
    {

        for (char c : word)
        {

            if (c >= 'a' && c <= 'z')
            {
                res.pb(c);
            }
            else
            {
                res.pb((c + 32));
            }
        }
    }
    else
    {

        for (char c : word)
        {

            if (c >= 'A' && c <= 'Z')
            {
                res.pb(c);
            }
            else
            {
                res.pb((c - 32));
            }
        }
    }

    cout << res << endl;
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
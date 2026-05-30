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

    string set;

    cin >> set;

    unordered_map<char, bool> seen;

    string letters;

    for (int i = 0; i < set.size(); i++)
    {

        if (set[i] >= 'a' && set[i] <= 'z')
        {
            if (!seen[set[i]])
            {
                letters.pb(set[i]);
                seen[set[i]] = true;
            }
        }
    }

    cout << letters.size() << endl;
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
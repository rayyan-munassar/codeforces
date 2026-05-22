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

    string username;

    cin >> username;

    set<char> distinct;

    for (char c : username)
    {
        distinct.insert(c);
    }

    string res = distinct.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";

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
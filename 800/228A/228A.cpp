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

    set<int> unique_shoes;

    int s1, s2, s3, s4;

    cin >> s1 >> s2 >> s3 >> s4;

    unique_shoes.insert(s1);
    unique_shoes.insert(s2);
    unique_shoes.insert(s3);
    unique_shoes.insert(s4);

    cout << 4 - unique_shoes.size() << endl;
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
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

    int arrCalories[4];
    int res = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arrCalories[i];
    }

    string s;

    cin >> s;

    for (char c : s)
    {
        if (c == '1')
            res += arrCalories[0];
        else if (c == '2')
            res += arrCalories[1];
        else if (c == '3')
            res += arrCalories[2];
        else
            res += arrCalories[3];
    }

    cout << res << endl;
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
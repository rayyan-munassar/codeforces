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
    string s;

    cin >> s;

    int biggestSeq = 0;
    int currentSeq = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {

        if (s[i] == s[i + 1])
        {
            currentSeq++;
            if (currentSeq > biggestSeq)
            {
                biggestSeq = currentSeq;
            }
        }
        else
        {

            currentSeq = 0;
        }
    }

    biggestSeq++;

    if (biggestSeq >= 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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

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

    string word, res;

    cin >> word;

    if (word[0] >= 'a' && word[0] <= 'z')
        res.push_back((word[0] - 32));

    else
        res.push_back(word[0]);

    for (int i = 1; i < word.size(); i++)
    {

        res.push_back(word[i]);
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
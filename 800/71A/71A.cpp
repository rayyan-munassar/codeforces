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

    string res;

    if (word.size() > 10)
    {
        res.push_back(word[0]);
        res += std::to_string(word.size() - 2);
        res.push_back(word[word.size() - 1]);
        cout << res << endl;
    }
    else
    {
        cout << word << endl;
    }
}

int main()
{
    fast_io;
    int t = 1;
    cin >> t; // Comment this out if the problem has only 1 testcase
    while (t--)
    {
        solve();
    }
    return 0;
}
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

    string num1, num2;

    cin >> num1 >> num2;

    string res;

    for (int i = 0; i < num1.size(); i++)
    {

        if (num1[i] != num2[i])
            res.pb('1');
        else
            res.pb('0');
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
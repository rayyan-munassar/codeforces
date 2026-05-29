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

    ll n;

    cin >> n;

    int count_lucky_num = 0;
    while (n > 0)
    {

        int last_digit = n % 10;

        if (last_digit == 4 || last_digit == 7)
            count_lucky_num++;

        n /= 10;
    }

    if (count_lucky_num == 4 || count_lucky_num == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
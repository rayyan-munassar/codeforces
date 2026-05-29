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
    int n;

    cin >> n;

    int minmum_bills_count = 0;

    int balance = 0;

    while (balance != n)
    {

        if (balance + 100 <= n)
        {
            balance += 100;
            minmum_bills_count++;
        }
        else if (balance + 20 <= n)
        {
            balance += 20;
            minmum_bills_count++;
        }
        else if (balance + 10 <= n)
        {
            balance += 10;
            minmum_bills_count++;
        }
        else if (balance + 5 <= n)
        {
            balance += 5;
            minmum_bills_count++;
        }
        else
        {
            balance++;
            minmum_bills_count++;
        }
    }

    cout << minmum_bills_count << endl;
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
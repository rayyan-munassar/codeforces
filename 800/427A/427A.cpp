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
    int untreatedCrime = 0;
    int freeOfficorCount = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a == -1)
        {

            if (freeOfficorCount != 0)
                freeOfficorCount--;
            else
            {
                untreatedCrime++;
            }
        }
        else
        {
            freeOfficorCount += a;
        }
    }

    cout << untreatedCrime << endl;
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
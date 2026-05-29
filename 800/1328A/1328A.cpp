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
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b;

        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int remainder = a % b;

            if(b - remainder > 0){
                cout << (b - remainder) << endl;
            }else{
                cout << -1*(b - remainder) << endl;
            }
        }
    }
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
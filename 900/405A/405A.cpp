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

    vector<int> freq(101);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        freq[a]++;
    }

    for (int i = 0; i < freq.size(); i++)
    {

        for (int j = 0; j < freq[i]; j++)
        {
            cout << i << ' ';
        }
    }
    cout << endl;
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
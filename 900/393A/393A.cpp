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

    int n_count = 0;
    int i_count = 0;
    int e_count = 0;
    int t_count = 0;
    int res = 0;

    for (char c : s)
    {

        if (c == 'n')
            n_count++;
        else if (c == 'i')
            i_count++;
        else if (c == 'e')
            e_count++;
        else if (c == 't')
            t_count++;
    }

    if (n_count >= 3 && i_count > 0 && t_count > 0 && e_count >= 3)
    {
        res++;
        n_count -= 3;
        i_count--;
        t_count--;
        e_count -= 3;
        while (n_count >= 2 && i_count > 0 && t_count > 0 && e_count >= 3)
        {

            res++;
            n_count -= 2;
            i_count--;
            t_count--;
            e_count -= 3;
        }
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
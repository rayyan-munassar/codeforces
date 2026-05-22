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

    string operation, res;

    cin >> operation;

    if (operation.size() == 1)
    {
        cout << operation << endl;
        return;
    }

    int num_1_count = 0;
    int num_2_count = 0;
    int num_3_count = 0;

    for (char c : operation)
    {
        if (c == '+')
            continue;

        if (c == '1')
            num_1_count++;
        else if (c == '2')
            num_2_count++;
        else
            num_3_count++;
    }

    for (int i = 0; i < num_1_count; i++)
    {
        if (res.size() != 0)
        {
            res.push_back('+');
        }
        res.push_back('1');
    }

    for (int i = 0; i < num_2_count; i++)
    {
        if (res.size() != 0)
        {
            res.push_back('+');
        }
        res.push_back('2');
    }

    for (int i = 0; i < num_3_count; i++)
    {
        if (res.size() != 0)
        {
            res.push_back('+');
        }
        res.push_back('3');
    }

    cout << res << endl;
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
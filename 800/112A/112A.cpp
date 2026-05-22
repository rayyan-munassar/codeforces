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

    string first_string, second_string;

    cin >> first_string >> second_string;

    for (int i = 0; i < first_string.size(); i++)
    {

        char first_char, second_char;

        if (first_string[i] >= 'a' && first_string[i] <= 'z')
        {
            first_char = first_string[i];
        }
        else
        {
            first_char = (first_string[i] + 32);
        }

        if (second_string[i] >= 'a' && second_string[i] <= 'z')
        {
            second_char = second_string[i];
        }
        else
        {
            second_char = (second_string[i] + 32);
        }
        if (first_char > second_char)
        {
            cout << 1 << endl;
            break;
        }
        if (second_char > first_char)
        {
            cout << -1 << endl;
            break;
        }
        if (second_char == first_char && i == first_string.size() - 1)
        {
            cout << 0 << endl;
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
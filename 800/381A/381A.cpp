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

    int start = 0;
    int end = n - 1;

    bool isSerajTurn = true;

    vector<int> cards(n);

    int serajSum = 0;
    int dimaSum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }
    int max;

    while (start <= end)

    {
        max = 0;
        if (cards[start] >= cards[end])
        {
            max = cards[start];
            start++;
        }
        else
        {
            max = cards[end];
            end--;
        }

        if (isSerajTurn)
        {

            serajSum += max;
            isSerajTurn = false;
        }
        else
        {
            dimaSum += max;
            isSerajTurn = true;
        }
    }

    cout << serajSum << ' ' << dimaSum;
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
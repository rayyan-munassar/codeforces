#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

bool isPerfectArr(vector<int> &arr)
{
    int max = arr[0];
    int min = arr[0];
    int gcdOfArr = arr[0];

    for (int i = 0; i < arr.size(); i++)

    {

        gcdOfArr = gcd(gcdOfArr, arr[i]);
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    return max - min == gcdOfArr;
}
void solve()
{

    int n;

    cin >> n;

    vector<int> permutation;
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        permutation.push_back(p);
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {

            vector<int> subArr;
            for (int k = i; k <= j; k++)
            {
                subArr.push_back(permutation[k]);
            }

            if (isPerfectArr(subArr))
                res++;
        }
    }

    cout << res << endl;
}

int main()
{
    fast_io;
    int t = 1;
    cin >> t; // Uncomment if the problem has multiple testcases
    while (t--)
    {
        solve();
    }
    return 0;
}
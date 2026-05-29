#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair

void solve() {
    int n;
    string s;

    cin >> n >> s;

    int anton_win_count = 0;
    int danik_win_count = 0;
    for(char c : s){
        if(c == 'A')anton_win_count++;
        else danik_win_count++;
    }

    string res;

    if(anton_win_count == danik_win_count) res = "Friendship";
    else if (anton_win_count > danik_win_count) res = "Anton";
    else res = "Danik";

    cout << res << endl;
}

int main() {
    fast_io;
    int t = 1;
    // cin >> t; // Comment this out if the problem has only 1 testcase
    while (t--) {
        solve();
    }
    return 0;
}
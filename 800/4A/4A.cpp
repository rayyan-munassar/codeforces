#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair

void solve() {
    int w;

    cin >> w;

    if(w > 2 && w % 2 == 0){
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
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
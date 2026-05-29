#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair

void solve() {

    string s, t;

    cin >> s >> t;

    string s_reverse;

    for(int i = s.size() - 1; i >= 0; i--){
        s_reverse.pb(s[i]);
    }

    string result; 

    result = s_reverse == t ? "YES" : "NO";
// 
    cout << result << endl;
    
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
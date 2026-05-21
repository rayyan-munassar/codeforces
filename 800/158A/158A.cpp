#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair

void solve() {

    int n, k;

    cin >> n >> k;

    int k_th_score = 0;

    int res = 0;

    vector<int> scores;

    for(int i = 0; i < n; i++){

        int c;

        cin >> c;

        if(i + 1 == k){
            k_th_score = c;
        }

        scores.pb(c);


    }

    for(int i = 0; i < scores.size(); i++){
        
        if(scores[i] >= k_th_score && scores[i] > 0){
            res++;
        }
    }

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
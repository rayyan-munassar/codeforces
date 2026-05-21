#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define mp make_pair

void solve() {
    

    int target_row = 3;
    int target_col = 3;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int n;

            cin >> n;

            if(n == 1){
                int row = i + 1;
                int col = j + 1;

                int row_diff = target_row - row;
                int col_diff = target_col - col;

                int row_destance = row_diff >= 0 ? row_diff : row_diff * - 1;
                int col_destance = col_diff >= 0 ? col_diff : col_diff * - 1;
                cout << (col_destance + row_destance) << endl;

            }
            
        }
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